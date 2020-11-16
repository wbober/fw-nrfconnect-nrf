/*
 * Copyright (c) 2020 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZIGBEE_CLI_PING_H__
#define ZIGBEE_CLI_PING_H__

#include <shell/shell.h>

#include <zboss_api.h>
#include <zboss_api_addons.h>
#include "zigbee_cli_cmd_zcl.h"

#define PING_CUSTOM_CLUSTER           0xBEEF
#define PING_MAX_LENGTH               79
#define PING_ECHO_REQUEST             0x00
#define PING_ECHO_REPLY               0x01
#define PING_ECHO_NO_ACK_REQUEST      0x02
#define PING_NO_ECHO_REQUEST          0x03
#define PING_ECHO_REQUEST_BYTE        0xAB
#define PING_ECHO_REPLY_BYTE          0xCD
#define PING_ECHO_REQUEST_TIMEOUT_S   10
#define PING_TABLE_SIZE               10

/* Forward declarations. */
struct ping_request;

/**@brief  Ping event type. Informs what kind of acknowledgment was received.
 */
enum ping_time_evt {
	/* APS acknowledgment of PING request received. */
	PING_EVT_ACK_RECEIVED,
	/* PING reply received. */
	PING_EVT_ECHO_RECEIVED,
	/* PING reply or APS acknowledgment was not received
	 * within timeout time.
	 */
	PING_EVT_FRAME_TIMEOUT,
	/* PING request was successfully scheduled for sending by the stack. */
	PING_EVT_FRAME_SCHEDULED,
	/* PING request was successfully sent. This event occurrs only
	 * if both APS ACK was not requested.
	 */
	PING_EVT_FRAME_SENT,
	/* PING received was received. This event is passed only
	 * to the callback registered via @p zb_ping_set_ping_indication_cb.
	 */
	PING_EVT_REQUEST_RECEIVED,
	/* An error occurred during sending PING request. */
	PING_EVT_ERROR,
};

/**@brief  Ping event callback definition.
 *
 * @param[in] evt           Type of received  ping acknowledgment
 * @param[in] delay_ms      Time, in miliseconds, between ping request
 *                          and the event.
 * @param[in] ping_req_ctx  Pointer to the ping request structure.
 */
typedef void (*ping_time_cb_t)(enum ping_time_evt evt, zb_uint32_t delay_ms,
	      struct ping_request *ping_req_ctx);

/**@brief The row of the table which holds the requests which were sent.
 *
 * @details We compare the incoming responses with the rows contents
 *          to determine if it is the answer.
 *          The key parameter is the sequence number.
 */
struct ping_request {
	bool taken;
	zb_uint8_t ping_seq;
	zb_uint8_t request_ack;
	zb_uint8_t request_echo;
	zb_uint16_t count;
	zb_uint16_t timeout_ms;
	volatile int64_t sent_time;
	const struct shell *shell;
	struct zcl_packet_info packet_info;
	ping_time_cb_t cb;
};

/**@brief Set ping request indication callback.
 *
 * @note The @p cb argument delay_ms will reflect current time
 *       in miliseconds.
 */
void zb_ping_set_ping_indication_cb(ping_time_cb_t cb);

/**@brief Acquire ping request context.
 *
 * @return  Pointer to a free ping request context or NULL on failure.
 */
struct ping_request *zb_ping_acquire_request(void);

/**@brief Release ping request context.
 *
 * @param ping_reply_ctx Pointer to the context structure to release.
 */
void zb_ping_release_request(struct ping_request *ping_reply_ctx);

/**@brief Actually construct the Ping Request frame and send it.
 *
 * @param ping_req_ctx  Pointer to the ping request context structure.
 */
void ping_request_send(struct ping_request *ping_req_ctx);

#endif /* ZIGBEE_CLI_PING_H__ */
