/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP
// This file is generated from clusters-Commands.h.zapt

#pragma once

#include <app/data-model/DecodableList.h>
#include <app/data-model/Encode.h>
#include <app/data-model/List.h>
#include <app/data-model/NullObject.h>
#include <app/data-model/Nullable.h>
#include <lib/core/DataModelTypes.h>
#include <lib/core/Optional.h>
#include <lib/core/TLV.h>
#include <lib/support/BitMask.h>

#include <clusters/shared/Enums.h>
#include <clusters/shared/Structs.h>

#include <clusters/Channel/ClusterId.h>
#include <clusters/Channel/CommandIds.h>
#include <clusters/Channel/Enums.h>
#include <clusters/Channel/Structs.h>

#include <cstdint>

namespace chip
{
namespace app
{
	namespace Clusters
	{
		namespace Channel
		{
			namespace Commands
			{
				// Forward-declarations so we can reference these later.

				namespace ChangeChannel
				{
					struct Type;
					struct DecodableType;
				} // namespace ChangeChannel

				namespace ChangeChannelResponse
				{
					struct Type;
					struct DecodableType;
				} // namespace ChangeChannelResponse

				namespace ChangeChannelByNumber
				{
					struct Type;
					struct DecodableType;
				} // namespace ChangeChannelByNumber

				namespace SkipChannel
				{
					struct Type;
					struct DecodableType;
				} // namespace SkipChannel

				namespace GetProgramGuide
				{
					struct Type;
					struct DecodableType;
				} // namespace GetProgramGuide

				namespace ProgramGuideResponse
				{
					struct Type;
					struct DecodableType;
				} // namespace ProgramGuideResponse

				namespace RecordProgram
				{
					struct Type;
					struct DecodableType;
				} // namespace RecordProgram

				namespace CancelRecordProgram
				{
					struct Type;
					struct DecodableType;
				} // namespace CancelRecordProgram

			} // namespace Commands

			namespace Commands
			{
				namespace ChangeChannel
				{
					enum class Fields : uint8_t {
						kMatch = 0,
					};

					struct Type {
					public:
						// Use GetCommandId instead of commandId directly to avoid naming
						// conflict with CommandIdentification in ExecutionOfACommand
						static constexpr CommandId GetCommandId()
						{
							return Commands::ChangeChannel::Id;
						}
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::Channel::Id;
						}

						chip::CharSpan match;

						CHIP_ERROR Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const;

						using ResponseType =
							Clusters::Channel::Commands::ChangeChannelResponse::DecodableType;

						static constexpr bool MustUseTimedInvoke() { return false; }
					};

					struct DecodableType {
					public:
						static constexpr CommandId GetCommandId()
						{
							return Commands::ChangeChannel::Id;
						}
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::Channel::Id;
						}
						static constexpr bool kIsFabricScoped = false;

						chip::CharSpan match;

						CHIP_ERROR Decode(TLV::TLVReader &reader);
					};
				}; // namespace ChangeChannel
				namespace ChangeChannelResponse
				{
					enum class Fields : uint8_t {
						kStatus = 0,
						kData = 1,
					};

					struct Type {
					public:
						// Use GetCommandId instead of commandId directly to avoid naming
						// conflict with CommandIdentification in ExecutionOfACommand
						static constexpr CommandId GetCommandId()
						{
							return Commands::ChangeChannelResponse::Id;
						}
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::Channel::Id;
						}

						StatusEnum status = static_cast<StatusEnum>(0);
						Optional<chip::CharSpan> data;

						CHIP_ERROR Encode(DataModel::FabricAwareTLVWriter &aWriter,
								  TLV::Tag aTag) const;

						using ResponseType = DataModel::NullObjectType;

						static constexpr bool MustUseTimedInvoke() { return false; }
					};

					struct DecodableType {
					public:
						static constexpr CommandId GetCommandId()
						{
							return Commands::ChangeChannelResponse::Id;
						}
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::Channel::Id;
						}

						StatusEnum status = static_cast<StatusEnum>(0);
						Optional<chip::CharSpan> data;

						CHIP_ERROR Decode(TLV::TLVReader &reader);
					};
				}; // namespace ChangeChannelResponse
				namespace ChangeChannelByNumber
				{
					enum class Fields : uint8_t {
						kMajorNumber = 0,
						kMinorNumber = 1,
					};

					struct Type {
					public:
						// Use GetCommandId instead of commandId directly to avoid naming
						// conflict with CommandIdentification in ExecutionOfACommand
						static constexpr CommandId GetCommandId()
						{
							return Commands::ChangeChannelByNumber::Id;
						}
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::Channel::Id;
						}

						uint16_t majorNumber = static_cast<uint16_t>(0);
						uint16_t minorNumber = static_cast<uint16_t>(0);

						CHIP_ERROR Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const;

						using ResponseType = DataModel::NullObjectType;

						static constexpr bool MustUseTimedInvoke() { return false; }
					};

					struct DecodableType {
					public:
						static constexpr CommandId GetCommandId()
						{
							return Commands::ChangeChannelByNumber::Id;
						}
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::Channel::Id;
						}
						static constexpr bool kIsFabricScoped = false;

						uint16_t majorNumber = static_cast<uint16_t>(0);
						uint16_t minorNumber = static_cast<uint16_t>(0);

						CHIP_ERROR Decode(TLV::TLVReader &reader);
					};
				}; // namespace ChangeChannelByNumber
				namespace SkipChannel
				{
					enum class Fields : uint8_t {
						kCount = 0,
					};

					struct Type {
					public:
						// Use GetCommandId instead of commandId directly to avoid naming
						// conflict with CommandIdentification in ExecutionOfACommand
						static constexpr CommandId GetCommandId()
						{
							return Commands::SkipChannel::Id;
						}
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::Channel::Id;
						}

						int16_t count = static_cast<int16_t>(0);

						CHIP_ERROR Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const;

						using ResponseType = DataModel::NullObjectType;

						static constexpr bool MustUseTimedInvoke() { return false; }
					};

					struct DecodableType {
					public:
						static constexpr CommandId GetCommandId()
						{
							return Commands::SkipChannel::Id;
						}
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::Channel::Id;
						}
						static constexpr bool kIsFabricScoped = false;

						int16_t count = static_cast<int16_t>(0);

						CHIP_ERROR Decode(TLV::TLVReader &reader);
					};
				}; // namespace SkipChannel
				namespace GetProgramGuide
				{
					enum class Fields : uint8_t {
						kStartTime = 0,
						kEndTime = 1,
						kChannelList = 2,
						kPageToken = 3,
						kRecordingFlag = 4,
						kExternalIDList = 5,
						kData = 6,
					};

					struct Type {
					public:
						// Use GetCommandId instead of commandId directly to avoid naming
						// conflict with CommandIdentification in ExecutionOfACommand
						static constexpr CommandId GetCommandId()
						{
							return Commands::GetProgramGuide::Id;
						}
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::Channel::Id;
						}

						Optional<uint32_t> startTime;
						Optional<uint32_t> endTime;
						Optional<DataModel::List<const Structs::ChannelInfoStruct::Type>>
							channelList;
						Optional<Structs::PageTokenStruct::Type> pageToken;
						Optional<chip::BitMask<RecordingFlagBitmap>> recordingFlag;
						Optional<DataModel::List<const Structs::AdditionalInfoStruct::Type>>
							externalIDList;
						Optional<chip::ByteSpan> data;

						CHIP_ERROR Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const;

						using ResponseType =
							Clusters::Channel::Commands::ProgramGuideResponse::DecodableType;

						static constexpr bool MustUseTimedInvoke() { return false; }
					};

					struct DecodableType {
					public:
						static constexpr CommandId GetCommandId()
						{
							return Commands::GetProgramGuide::Id;
						}
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::Channel::Id;
						}
						static constexpr bool kIsFabricScoped = false;

						Optional<uint32_t> startTime;
						Optional<uint32_t> endTime;
						Optional<DataModel::DecodableList<
							Structs::ChannelInfoStruct::DecodableType>>
							channelList;
						Optional<Structs::PageTokenStruct::DecodableType> pageToken;
						Optional<chip::BitMask<RecordingFlagBitmap>> recordingFlag;
						Optional<DataModel::DecodableList<
							Structs::AdditionalInfoStruct::DecodableType>>
							externalIDList;
						Optional<chip::ByteSpan> data;

						CHIP_ERROR Decode(TLV::TLVReader &reader);
					};
				}; // namespace GetProgramGuide
				namespace ProgramGuideResponse
				{
					enum class Fields : uint8_t {
						kPaging = 0,
						kProgramList = 1,
					};

					struct Type {
					public:
						// Use GetCommandId instead of commandId directly to avoid naming
						// conflict with CommandIdentification in ExecutionOfACommand
						static constexpr CommandId GetCommandId()
						{
							return Commands::ProgramGuideResponse::Id;
						}
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::Channel::Id;
						}

						Structs::ChannelPagingStruct::Type paging;
						DataModel::List<const Structs::ProgramStruct::Type> programList;

						CHIP_ERROR Encode(DataModel::FabricAwareTLVWriter &aWriter,
								  TLV::Tag aTag) const;

						using ResponseType = DataModel::NullObjectType;

						static constexpr bool MustUseTimedInvoke() { return false; }
					};

					struct DecodableType {
					public:
						static constexpr CommandId GetCommandId()
						{
							return Commands::ProgramGuideResponse::Id;
						}
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::Channel::Id;
						}

						Structs::ChannelPagingStruct::DecodableType paging;
						DataModel::DecodableList<Structs::ProgramStruct::DecodableType>
							programList;

						CHIP_ERROR Decode(TLV::TLVReader &reader);
					};
				}; // namespace ProgramGuideResponse
				namespace RecordProgram
				{
					enum class Fields : uint8_t {
						kProgramIdentifier = 0,
						kShouldRecordSeries = 1,
						kExternalIDList = 2,
						kData = 3,
					};

					struct Type {
					public:
						// Use GetCommandId instead of commandId directly to avoid naming
						// conflict with CommandIdentification in ExecutionOfACommand
						static constexpr CommandId GetCommandId()
						{
							return Commands::RecordProgram::Id;
						}
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::Channel::Id;
						}

						chip::CharSpan programIdentifier;
						bool shouldRecordSeries = static_cast<bool>(0);
						DataModel::List<const Structs::AdditionalInfoStruct::Type>
							externalIDList;
						chip::ByteSpan data;

						CHIP_ERROR Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const;

						using ResponseType = DataModel::NullObjectType;

						static constexpr bool MustUseTimedInvoke() { return false; }
					};

					struct DecodableType {
					public:
						static constexpr CommandId GetCommandId()
						{
							return Commands::RecordProgram::Id;
						}
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::Channel::Id;
						}
						static constexpr bool kIsFabricScoped = false;

						chip::CharSpan programIdentifier;
						bool shouldRecordSeries = static_cast<bool>(0);
						DataModel::DecodableList<Structs::AdditionalInfoStruct::DecodableType>
							externalIDList;
						chip::ByteSpan data;

						CHIP_ERROR Decode(TLV::TLVReader &reader);
					};
				}; // namespace RecordProgram
				namespace CancelRecordProgram
				{
					enum class Fields : uint8_t {
						kProgramIdentifier = 0,
						kShouldRecordSeries = 1,
						kExternalIDList = 2,
						kData = 3,
					};

					struct Type {
					public:
						// Use GetCommandId instead of commandId directly to avoid naming
						// conflict with CommandIdentification in ExecutionOfACommand
						static constexpr CommandId GetCommandId()
						{
							return Commands::CancelRecordProgram::Id;
						}
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::Channel::Id;
						}

						chip::CharSpan programIdentifier;
						bool shouldRecordSeries = static_cast<bool>(0);
						DataModel::List<const Structs::AdditionalInfoStruct::Type>
							externalIDList;
						chip::ByteSpan data;

						CHIP_ERROR Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const;

						using ResponseType = DataModel::NullObjectType;

						static constexpr bool MustUseTimedInvoke() { return false; }
					};

					struct DecodableType {
					public:
						static constexpr CommandId GetCommandId()
						{
							return Commands::CancelRecordProgram::Id;
						}
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::Channel::Id;
						}
						static constexpr bool kIsFabricScoped = false;

						chip::CharSpan programIdentifier;
						bool shouldRecordSeries = static_cast<bool>(0);
						DataModel::DecodableList<Structs::AdditionalInfoStruct::DecodableType>
							externalIDList;
						chip::ByteSpan data;

						CHIP_ERROR Decode(TLV::TLVReader &reader);
					};
				}; // namespace CancelRecordProgram
			} // namespace Commands
		} // namespace Channel
	} // namespace Clusters
} // namespace app
} // namespace chip
