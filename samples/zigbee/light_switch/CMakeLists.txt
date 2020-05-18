#
# Copyright (c) 2020 Nordic Semiconductor ASA
#
# SPDX-License-Identifier: LicenseRef-BSD-5-Clause-Nordic
#

cmake_minimum_required(VERSION 3.8)

add_definitions(-DZB_ED_ROLE)

include($ENV{ZEPHYR_BASE}/../nrf/cmake/boilerplate.cmake)
include($ENV{ZEPHYR_BASE}/cmake/app/boilerplate.cmake NO_POLICY_SCOPE)

project("Light Switch")

# NORDIC SDK APP START
target_sources(
  app PRIVATE src/main.c
)
target_sources_ifdef(CONFIG_NUS_CMD
  app PRIVATE src/nus_cmd.c
)
target_include_directories(app PRIVATE include)
# NORDIC SDK APP END
