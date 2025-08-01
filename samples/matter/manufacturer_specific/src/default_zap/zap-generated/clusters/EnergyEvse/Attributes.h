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
// This file is generated from clusters-Attributes.h.zapt

#pragma once

#include <app/ConcreteAttributePath.h>
#include <app/data-model/DecodableList.h>
#include <app/data-model/List.h>
#include <app/data-model/Nullable.h>
#include <app/util/basic-types.h>
#include <lib/core/TLV.h>
#include <lib/support/BitMask.h>

#include <clusters/shared/Attributes.h>
#include <clusters/shared/Enums.h>
#include <clusters/shared/Structs.h>

#include <clusters/EnergyEvse/AttributeIds.h>
#include <clusters/EnergyEvse/ClusterId.h>
#include <clusters/EnergyEvse/Enums.h>
#include <clusters/EnergyEvse/Structs.h>

namespace chip
{
namespace app
{
	namespace Clusters
	{
		namespace EnergyEvse
		{
			namespace Attributes
			{

				namespace State
				{
					struct TypeInfo {
						using Type = chip::app::DataModel::Nullable<
							chip::app::Clusters::EnergyEvse::StateEnum>;
						using DecodableType = chip::app::DataModel::Nullable<
							chip::app::Clusters::EnergyEvse::StateEnum>;
						using DecodableArgType = const chip::app::DataModel::Nullable<
							chip::app::Clusters::EnergyEvse::StateEnum> &;

						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
						static constexpr AttributeId GetAttributeId()
						{
							return Attributes::State::Id;
						}
						static constexpr bool MustUseTimedWrite() { return false; }
					};
				} // namespace State
				namespace SupplyState
				{
					struct TypeInfo {
						using Type = chip::app::Clusters::EnergyEvse::SupplyStateEnum;
						using DecodableType = chip::app::Clusters::EnergyEvse::SupplyStateEnum;
						using DecodableArgType =
							chip::app::Clusters::EnergyEvse::SupplyStateEnum;

						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
						static constexpr AttributeId GetAttributeId()
						{
							return Attributes::SupplyState::Id;
						}
						static constexpr bool MustUseTimedWrite() { return false; }
					};
				} // namespace SupplyState
				namespace FaultState
				{
					struct TypeInfo {
						using Type = chip::app::Clusters::EnergyEvse::FaultStateEnum;
						using DecodableType = chip::app::Clusters::EnergyEvse::FaultStateEnum;
						using DecodableArgType =
							chip::app::Clusters::EnergyEvse::FaultStateEnum;

						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
						static constexpr AttributeId GetAttributeId()
						{
							return Attributes::FaultState::Id;
						}
						static constexpr bool MustUseTimedWrite() { return false; }
					};
				} // namespace FaultState
				namespace ChargingEnabledUntil
				{
					struct TypeInfo {
						using Type = chip::app::DataModel::Nullable<uint32_t>;
						using DecodableType = chip::app::DataModel::Nullable<uint32_t>;
						using DecodableArgType =
							const chip::app::DataModel::Nullable<uint32_t> &;

						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
						static constexpr AttributeId GetAttributeId()
						{
							return Attributes::ChargingEnabledUntil::Id;
						}
						static constexpr bool MustUseTimedWrite() { return false; }
					};
				} // namespace ChargingEnabledUntil
				namespace DischargingEnabledUntil
				{
					struct TypeInfo {
						using Type = chip::app::DataModel::Nullable<uint32_t>;
						using DecodableType = chip::app::DataModel::Nullable<uint32_t>;
						using DecodableArgType =
							const chip::app::DataModel::Nullable<uint32_t> &;

						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
						static constexpr AttributeId GetAttributeId()
						{
							return Attributes::DischargingEnabledUntil::Id;
						}
						static constexpr bool MustUseTimedWrite() { return false; }
					};
				} // namespace DischargingEnabledUntil
				namespace CircuitCapacity
				{
					struct TypeInfo {
						using Type = int64_t;
						using DecodableType = int64_t;
						using DecodableArgType = int64_t;

						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
						static constexpr AttributeId GetAttributeId()
						{
							return Attributes::CircuitCapacity::Id;
						}
						static constexpr bool MustUseTimedWrite() { return false; }
					};
				} // namespace CircuitCapacity
				namespace MinimumChargeCurrent
				{
					struct TypeInfo {
						using Type = int64_t;
						using DecodableType = int64_t;
						using DecodableArgType = int64_t;

						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
						static constexpr AttributeId GetAttributeId()
						{
							return Attributes::MinimumChargeCurrent::Id;
						}
						static constexpr bool MustUseTimedWrite() { return false; }
					};
				} // namespace MinimumChargeCurrent
				namespace MaximumChargeCurrent
				{
					struct TypeInfo {
						using Type = int64_t;
						using DecodableType = int64_t;
						using DecodableArgType = int64_t;

						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
						static constexpr AttributeId GetAttributeId()
						{
							return Attributes::MaximumChargeCurrent::Id;
						}
						static constexpr bool MustUseTimedWrite() { return false; }
					};
				} // namespace MaximumChargeCurrent
				namespace MaximumDischargeCurrent
				{
					struct TypeInfo {
						using Type = int64_t;
						using DecodableType = int64_t;
						using DecodableArgType = int64_t;

						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
						static constexpr AttributeId GetAttributeId()
						{
							return Attributes::MaximumDischargeCurrent::Id;
						}
						static constexpr bool MustUseTimedWrite() { return false; }
					};
				} // namespace MaximumDischargeCurrent
				namespace UserMaximumChargeCurrent
				{
					struct TypeInfo {
						using Type = int64_t;
						using DecodableType = int64_t;
						using DecodableArgType = int64_t;

						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
						static constexpr AttributeId GetAttributeId()
						{
							return Attributes::UserMaximumChargeCurrent::Id;
						}
						static constexpr bool MustUseTimedWrite() { return false; }
					};
				} // namespace UserMaximumChargeCurrent
				namespace RandomizationDelayWindow
				{
					struct TypeInfo {
						using Type = uint32_t;
						using DecodableType = uint32_t;
						using DecodableArgType = uint32_t;

						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
						static constexpr AttributeId GetAttributeId()
						{
							return Attributes::RandomizationDelayWindow::Id;
						}
						static constexpr bool MustUseTimedWrite() { return false; }
					};
				} // namespace RandomizationDelayWindow
				namespace NextChargeStartTime
				{
					struct TypeInfo {
						using Type = chip::app::DataModel::Nullable<uint32_t>;
						using DecodableType = chip::app::DataModel::Nullable<uint32_t>;
						using DecodableArgType =
							const chip::app::DataModel::Nullable<uint32_t> &;

						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
						static constexpr AttributeId GetAttributeId()
						{
							return Attributes::NextChargeStartTime::Id;
						}
						static constexpr bool MustUseTimedWrite() { return false; }
					};
				} // namespace NextChargeStartTime
				namespace NextChargeTargetTime
				{
					struct TypeInfo {
						using Type = chip::app::DataModel::Nullable<uint32_t>;
						using DecodableType = chip::app::DataModel::Nullable<uint32_t>;
						using DecodableArgType =
							const chip::app::DataModel::Nullable<uint32_t> &;

						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
						static constexpr AttributeId GetAttributeId()
						{
							return Attributes::NextChargeTargetTime::Id;
						}
						static constexpr bool MustUseTimedWrite() { return false; }
					};
				} // namespace NextChargeTargetTime
				namespace NextChargeRequiredEnergy
				{
					struct TypeInfo {
						using Type = chip::app::DataModel::Nullable<int64_t>;
						using DecodableType = chip::app::DataModel::Nullable<int64_t>;
						using DecodableArgType =
							const chip::app::DataModel::Nullable<int64_t> &;

						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
						static constexpr AttributeId GetAttributeId()
						{
							return Attributes::NextChargeRequiredEnergy::Id;
						}
						static constexpr bool MustUseTimedWrite() { return false; }
					};
				} // namespace NextChargeRequiredEnergy
				namespace NextChargeTargetSoC
				{
					struct TypeInfo {
						using Type = chip::app::DataModel::Nullable<chip::Percent>;
						using DecodableType = chip::app::DataModel::Nullable<chip::Percent>;
						using DecodableArgType =
							const chip::app::DataModel::Nullable<chip::Percent> &;

						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
						static constexpr AttributeId GetAttributeId()
						{
							return Attributes::NextChargeTargetSoC::Id;
						}
						static constexpr bool MustUseTimedWrite() { return false; }
					};
				} // namespace NextChargeTargetSoC
				namespace ApproximateEVEfficiency
				{
					struct TypeInfo {
						using Type = chip::app::DataModel::Nullable<uint16_t>;
						using DecodableType = chip::app::DataModel::Nullable<uint16_t>;
						using DecodableArgType =
							const chip::app::DataModel::Nullable<uint16_t> &;

						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
						static constexpr AttributeId GetAttributeId()
						{
							return Attributes::ApproximateEVEfficiency::Id;
						}
						static constexpr bool MustUseTimedWrite() { return false; }
					};
				} // namespace ApproximateEVEfficiency
				namespace StateOfCharge
				{
					struct TypeInfo {
						using Type = chip::app::DataModel::Nullable<chip::Percent>;
						using DecodableType = chip::app::DataModel::Nullable<chip::Percent>;
						using DecodableArgType =
							const chip::app::DataModel::Nullable<chip::Percent> &;

						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
						static constexpr AttributeId GetAttributeId()
						{
							return Attributes::StateOfCharge::Id;
						}
						static constexpr bool MustUseTimedWrite() { return false; }
					};
				} // namespace StateOfCharge
				namespace BatteryCapacity
				{
					struct TypeInfo {
						using Type = chip::app::DataModel::Nullable<int64_t>;
						using DecodableType = chip::app::DataModel::Nullable<int64_t>;
						using DecodableArgType =
							const chip::app::DataModel::Nullable<int64_t> &;

						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
						static constexpr AttributeId GetAttributeId()
						{
							return Attributes::BatteryCapacity::Id;
						}
						static constexpr bool MustUseTimedWrite() { return false; }
					};
				} // namespace BatteryCapacity
				namespace VehicleID
				{
					struct TypeInfo {
						using Type = chip::app::DataModel::Nullable<chip::CharSpan>;
						using DecodableType = chip::app::DataModel::Nullable<chip::CharSpan>;
						using DecodableArgType =
							const chip::app::DataModel::Nullable<chip::CharSpan> &;

						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
						static constexpr AttributeId GetAttributeId()
						{
							return Attributes::VehicleID::Id;
						}
						static constexpr bool MustUseTimedWrite() { return false; }
						static constexpr size_t MaxLength() { return 32; }
					};
				} // namespace VehicleID
				namespace SessionID
				{
					struct TypeInfo {
						using Type = chip::app::DataModel::Nullable<uint32_t>;
						using DecodableType = chip::app::DataModel::Nullable<uint32_t>;
						using DecodableArgType =
							const chip::app::DataModel::Nullable<uint32_t> &;

						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
						static constexpr AttributeId GetAttributeId()
						{
							return Attributes::SessionID::Id;
						}
						static constexpr bool MustUseTimedWrite() { return false; }
					};
				} // namespace SessionID
				namespace SessionDuration
				{
					struct TypeInfo {
						using Type = chip::app::DataModel::Nullable<uint32_t>;
						using DecodableType = chip::app::DataModel::Nullable<uint32_t>;
						using DecodableArgType =
							const chip::app::DataModel::Nullable<uint32_t> &;

						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
						static constexpr AttributeId GetAttributeId()
						{
							return Attributes::SessionDuration::Id;
						}
						static constexpr bool MustUseTimedWrite() { return false; }
					};
				} // namespace SessionDuration
				namespace SessionEnergyCharged
				{
					struct TypeInfo {
						using Type = chip::app::DataModel::Nullable<int64_t>;
						using DecodableType = chip::app::DataModel::Nullable<int64_t>;
						using DecodableArgType =
							const chip::app::DataModel::Nullable<int64_t> &;

						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
						static constexpr AttributeId GetAttributeId()
						{
							return Attributes::SessionEnergyCharged::Id;
						}
						static constexpr bool MustUseTimedWrite() { return false; }
					};
				} // namespace SessionEnergyCharged
				namespace SessionEnergyDischarged
				{
					struct TypeInfo {
						using Type = chip::app::DataModel::Nullable<int64_t>;
						using DecodableType = chip::app::DataModel::Nullable<int64_t>;
						using DecodableArgType =
							const chip::app::DataModel::Nullable<int64_t> &;

						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
						static constexpr AttributeId GetAttributeId()
						{
							return Attributes::SessionEnergyDischarged::Id;
						}
						static constexpr bool MustUseTimedWrite() { return false; }
					};
				} // namespace SessionEnergyDischarged
				namespace GeneratedCommandList
				{
					struct TypeInfo
						: public Clusters::Globals::Attributes::GeneratedCommandList::TypeInfo {
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
					};
				} // namespace GeneratedCommandList
				namespace AcceptedCommandList
				{
					struct TypeInfo
						: public Clusters::Globals::Attributes::AcceptedCommandList::TypeInfo {
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
					};
				} // namespace AcceptedCommandList
				namespace AttributeList
				{
					struct TypeInfo
						: public Clusters::Globals::Attributes::AttributeList::TypeInfo {
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
					};
				} // namespace AttributeList
				namespace FeatureMap
				{
					struct TypeInfo : public Clusters::Globals::Attributes::FeatureMap::TypeInfo {
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
					};
				} // namespace FeatureMap
				namespace ClusterRevision
				{
					struct TypeInfo
						: public Clusters::Globals::Attributes::ClusterRevision::TypeInfo {
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}
					};
				} // namespace ClusterRevision

				struct TypeInfo {
					struct DecodableType {
						static constexpr ClusterId GetClusterId()
						{
							return Clusters::EnergyEvse::Id;
						}

						CHIP_ERROR Decode(TLV::TLVReader &reader,
								  const ConcreteAttributePath &path);

						Attributes::State::TypeInfo::DecodableType state;
						Attributes::SupplyState::TypeInfo::DecodableType supplyState =
							static_cast<chip::app::Clusters::EnergyEvse::SupplyStateEnum>(
								0);
						Attributes::FaultState::TypeInfo::DecodableType faultState =
							static_cast<chip::app::Clusters::EnergyEvse::FaultStateEnum>(0);
						Attributes::ChargingEnabledUntil::TypeInfo::DecodableType
							chargingEnabledUntil;
						Attributes::DischargingEnabledUntil::TypeInfo::DecodableType
							dischargingEnabledUntil;
						Attributes::CircuitCapacity::TypeInfo::DecodableType circuitCapacity =
							static_cast<int64_t>(0);
						Attributes::MinimumChargeCurrent::TypeInfo::DecodableType
							minimumChargeCurrent = static_cast<int64_t>(0);
						Attributes::MaximumChargeCurrent::TypeInfo::DecodableType
							maximumChargeCurrent = static_cast<int64_t>(0);
						Attributes::MaximumDischargeCurrent::TypeInfo::DecodableType
							maximumDischargeCurrent = static_cast<int64_t>(0);
						Attributes::UserMaximumChargeCurrent::TypeInfo::DecodableType
							userMaximumChargeCurrent = static_cast<int64_t>(0);
						Attributes::RandomizationDelayWindow::TypeInfo::DecodableType
							randomizationDelayWindow = static_cast<uint32_t>(0);
						Attributes::NextChargeStartTime::TypeInfo::DecodableType
							nextChargeStartTime;
						Attributes::NextChargeTargetTime::TypeInfo::DecodableType
							nextChargeTargetTime;
						Attributes::NextChargeRequiredEnergy::TypeInfo::DecodableType
							nextChargeRequiredEnergy;
						Attributes::NextChargeTargetSoC::TypeInfo::DecodableType
							nextChargeTargetSoC;
						Attributes::ApproximateEVEfficiency::TypeInfo::DecodableType
							approximateEVEfficiency;
						Attributes::StateOfCharge::TypeInfo::DecodableType stateOfCharge;
						Attributes::BatteryCapacity::TypeInfo::DecodableType batteryCapacity;
						Attributes::VehicleID::TypeInfo::DecodableType vehicleID;
						Attributes::SessionID::TypeInfo::DecodableType sessionID;
						Attributes::SessionDuration::TypeInfo::DecodableType sessionDuration;
						Attributes::SessionEnergyCharged::TypeInfo::DecodableType
							sessionEnergyCharged;
						Attributes::SessionEnergyDischarged::TypeInfo::DecodableType
							sessionEnergyDischarged;
						Attributes::GeneratedCommandList::TypeInfo::DecodableType
							generatedCommandList;
						Attributes::AcceptedCommandList::TypeInfo::DecodableType
							acceptedCommandList;
						Attributes::AttributeList::TypeInfo::DecodableType attributeList;
						Attributes::FeatureMap::TypeInfo::DecodableType featureMap =
							static_cast<uint32_t>(0);
						Attributes::ClusterRevision::TypeInfo::DecodableType clusterRevision =
							static_cast<uint16_t>(0);
					};
				};
			} // namespace Attributes
		} // namespace EnergyEvse
	} // namespace Clusters
} // namespace app
} // namespace chip
