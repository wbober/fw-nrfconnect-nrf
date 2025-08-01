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
// This file is generated from clusters-Attributes.ipp.zapt

#include <clusters/FanControl/Attributes.h>

#include <app/data-model/Decode.h>
#include <app/data-model/WrappedStructEncoder.h>

namespace chip
{
namespace app
{
	namespace Clusters
	{
		namespace FanControl
		{
			namespace Attributes
			{
				CHIP_ERROR TypeInfo::DecodableType::Decode(TLV::TLVReader &reader,
									   const ConcreteAttributePath &path)
				{
					switch (path.mAttributeId) {
					case Attributes::FanMode::TypeInfo::GetAttributeId():
						return DataModel::Decode(reader, fanMode);
					case Attributes::FanModeSequence::TypeInfo::GetAttributeId():
						return DataModel::Decode(reader, fanModeSequence);
					case Attributes::PercentSetting::TypeInfo::GetAttributeId():
						return DataModel::Decode(reader, percentSetting);
					case Attributes::PercentCurrent::TypeInfo::GetAttributeId():
						return DataModel::Decode(reader, percentCurrent);
					case Attributes::SpeedMax::TypeInfo::GetAttributeId():
						return DataModel::Decode(reader, speedMax);
					case Attributes::SpeedSetting::TypeInfo::GetAttributeId():
						return DataModel::Decode(reader, speedSetting);
					case Attributes::SpeedCurrent::TypeInfo::GetAttributeId():
						return DataModel::Decode(reader, speedCurrent);
					case Attributes::RockSupport::TypeInfo::GetAttributeId():
						return DataModel::Decode(reader, rockSupport);
					case Attributes::RockSetting::TypeInfo::GetAttributeId():
						return DataModel::Decode(reader, rockSetting);
					case Attributes::WindSupport::TypeInfo::GetAttributeId():
						return DataModel::Decode(reader, windSupport);
					case Attributes::WindSetting::TypeInfo::GetAttributeId():
						return DataModel::Decode(reader, windSetting);
					case Attributes::AirflowDirection::TypeInfo::GetAttributeId():
						return DataModel::Decode(reader, airflowDirection);
					case Attributes::GeneratedCommandList::TypeInfo::GetAttributeId():
						return DataModel::Decode(reader, generatedCommandList);
					case Attributes::AcceptedCommandList::TypeInfo::GetAttributeId():
						return DataModel::Decode(reader, acceptedCommandList);
					case Attributes::AttributeList::TypeInfo::GetAttributeId():
						return DataModel::Decode(reader, attributeList);
					case Attributes::FeatureMap::TypeInfo::GetAttributeId():
						return DataModel::Decode(reader, featureMap);
					case Attributes::ClusterRevision::TypeInfo::GetAttributeId():
						return DataModel::Decode(reader, clusterRevision);
					default:
						return CHIP_NO_ERROR;
					}
				}
			} // namespace Attributes
		} // namespace FanControl
	} // namespace Clusters
} // namespace app
} // namespace chip
