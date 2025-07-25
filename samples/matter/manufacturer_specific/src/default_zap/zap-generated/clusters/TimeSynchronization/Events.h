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
// This file is generated from clusters-Events.h.zapt

#pragma once

#include <app/EventLoggingTypes.h>
#include <app/data-model/DecodableList.h>
#include <app/data-model/List.h>
#include <app/data-model/Nullable.h>
#include <lib/core/DataModelTypes.h>
#include <lib/core/TLV.h>
#include <lib/support/BitMask.h>

#include <clusters/shared/Enums.h>
#include <clusters/shared/Structs.h>

#include <clusters/TimeSynchronization/ClusterId.h>
#include <clusters/TimeSynchronization/Enums.h>
#include <clusters/TimeSynchronization/EventIds.h>
#include <clusters/TimeSynchronization/Structs.h>

#include <cstdint>

namespace chip
{
namespace app
{
	namespace Clusters
	{
		namespace TimeSynchronization
		{
			namespace Events
			{
				namespace DSTTableEmpty
				{
					static constexpr PriorityLevel kPriorityLevel = PriorityLevel::Info;

					enum class Fields : uint8_t {};

					struct Type {
					public:
						static constexpr PriorityLevel GetPriorityLevel()
						{
							return kPriorityLevel;
						}
						static constexpr EventId GetEventId()
						{
							return Events::DSTTableEmpty::Id;
						}
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::TimeSynchronization::Id;
						}
						static constexpr bool kIsFabricScoped = false;

						CHIP_ERROR Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const;
					};

					struct DecodableType {
					public:
						static constexpr PriorityLevel GetPriorityLevel()
						{
							return kPriorityLevel;
						}
						static constexpr EventId GetEventId()
						{
							return Events::DSTTableEmpty::Id;
						}
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::TimeSynchronization::Id;
						}

						CHIP_ERROR Decode(TLV::TLVReader &reader);
					};
				} // namespace DSTTableEmpty
				namespace DSTStatus
				{
					static constexpr PriorityLevel kPriorityLevel = PriorityLevel::Info;

					enum class Fields : uint8_t {
						kDSTOffsetActive = 0,
					};

					struct Type {
					public:
						static constexpr PriorityLevel GetPriorityLevel()
						{
							return kPriorityLevel;
						}
						static constexpr EventId GetEventId() { return Events::DSTStatus::Id; }
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::TimeSynchronization::Id;
						}
						static constexpr bool kIsFabricScoped = false;

						bool DSTOffsetActive = static_cast<bool>(0);

						CHIP_ERROR Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const;
					};

					struct DecodableType {
					public:
						static constexpr PriorityLevel GetPriorityLevel()
						{
							return kPriorityLevel;
						}
						static constexpr EventId GetEventId() { return Events::DSTStatus::Id; }
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::TimeSynchronization::Id;
						}

						bool DSTOffsetActive = static_cast<bool>(0);

						CHIP_ERROR Decode(TLV::TLVReader &reader);
					};
				} // namespace DSTStatus
				namespace TimeZoneStatus
				{
					static constexpr PriorityLevel kPriorityLevel = PriorityLevel::Info;

					enum class Fields : uint8_t {
						kOffset = 0,
						kName = 1,
					};

					struct Type {
					public:
						static constexpr PriorityLevel GetPriorityLevel()
						{
							return kPriorityLevel;
						}
						static constexpr EventId GetEventId()
						{
							return Events::TimeZoneStatus::Id;
						}
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::TimeSynchronization::Id;
						}
						static constexpr bool kIsFabricScoped = false;

						int32_t offset = static_cast<int32_t>(0);
						Optional<chip::CharSpan> name;

						CHIP_ERROR Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const;
					};

					struct DecodableType {
					public:
						static constexpr PriorityLevel GetPriorityLevel()
						{
							return kPriorityLevel;
						}
						static constexpr EventId GetEventId()
						{
							return Events::TimeZoneStatus::Id;
						}
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::TimeSynchronization::Id;
						}

						int32_t offset = static_cast<int32_t>(0);
						Optional<chip::CharSpan> name;

						CHIP_ERROR Decode(TLV::TLVReader &reader);
					};
				} // namespace TimeZoneStatus
				namespace TimeFailure
				{
					static constexpr PriorityLevel kPriorityLevel = PriorityLevel::Info;

					enum class Fields : uint8_t {};

					struct Type {
					public:
						static constexpr PriorityLevel GetPriorityLevel()
						{
							return kPriorityLevel;
						}
						static constexpr EventId GetEventId()
						{
							return Events::TimeFailure::Id;
						}
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::TimeSynchronization::Id;
						}
						static constexpr bool kIsFabricScoped = false;

						CHIP_ERROR Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const;
					};

					struct DecodableType {
					public:
						static constexpr PriorityLevel GetPriorityLevel()
						{
							return kPriorityLevel;
						}
						static constexpr EventId GetEventId()
						{
							return Events::TimeFailure::Id;
						}
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::TimeSynchronization::Id;
						}

						CHIP_ERROR Decode(TLV::TLVReader &reader);
					};
				} // namespace TimeFailure
				namespace MissingTrustedTimeSource
				{
					static constexpr PriorityLevel kPriorityLevel = PriorityLevel::Info;

					enum class Fields : uint8_t {};

					struct Type {
					public:
						static constexpr PriorityLevel GetPriorityLevel()
						{
							return kPriorityLevel;
						}
						static constexpr EventId GetEventId()
						{
							return Events::MissingTrustedTimeSource::Id;
						}
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::TimeSynchronization::Id;
						}
						static constexpr bool kIsFabricScoped = false;

						CHIP_ERROR Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const;
					};

					struct DecodableType {
					public:
						static constexpr PriorityLevel GetPriorityLevel()
						{
							return kPriorityLevel;
						}
						static constexpr EventId GetEventId()
						{
							return Events::MissingTrustedTimeSource::Id;
						}
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::TimeSynchronization::Id;
						}

						CHIP_ERROR Decode(TLV::TLVReader &reader);
					};
				} // namespace MissingTrustedTimeSource
			} // namespace Events
		} // namespace TimeSynchronization
	} // namespace Clusters
} // namespace app
} // namespace chip
