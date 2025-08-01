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
// This file is generated from clusters-Structs.ipp.zapt

#include <clusters/JointFabricDatastore/Structs.h>

#include <app/data-model/StructDecodeIterator.h>
#include <app/data-model/WrappedStructEncoder.h>

namespace chip
{
namespace app
{
	namespace Clusters
	{
		namespace JointFabricDatastore
		{
			namespace Structs
			{

				namespace DatastoreStatusEntryStruct
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
						encoder.Encode(to_underlying(Fields::kState), state);
						encoder.Encode(to_underlying(Fields::kUpdateTimestamp),
							       updateTimestamp);
						encoder.Encode(to_underlying(Fields::kFailureCode), failureCode);
						return encoder.Finalize();
					}

					CHIP_ERROR DecodableType::Decode(TLV::TLVReader &reader)
					{
						detail::StructDecodeIterator __iterator(reader);
						while (true) {
							uint8_t __context_tag = 0;
							CHIP_ERROR err = __iterator.Next(__context_tag);
							VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV,
									    CHIP_NO_ERROR);
							ReturnErrorOnFailure(err);

							if (__context_tag == to_underlying(Fields::kState)) {
								err = DataModel::Decode(reader, state);
							} else if (__context_tag ==
								   to_underlying(Fields::kUpdateTimestamp)) {
								err = DataModel::Decode(reader, updateTimestamp);
							} else if (__context_tag ==
								   to_underlying(Fields::kFailureCode)) {
								err = DataModel::Decode(reader, failureCode);
							}

							ReturnErrorOnFailure(err);
						}
					}

				} // namespace DatastoreStatusEntryStruct

				namespace DatastoreNodeKeySetEntryStruct
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
						encoder.Encode(to_underlying(Fields::kNodeID), nodeID);
						encoder.Encode(to_underlying(Fields::kGroupKeySetID), groupKeySetID);
						encoder.Encode(to_underlying(Fields::kStatusEntry), statusEntry);
						return encoder.Finalize();
					}

					CHIP_ERROR DecodableType::Decode(TLV::TLVReader &reader)
					{
						detail::StructDecodeIterator __iterator(reader);
						while (true) {
							uint8_t __context_tag = 0;
							CHIP_ERROR err = __iterator.Next(__context_tag);
							VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV,
									    CHIP_NO_ERROR);
							ReturnErrorOnFailure(err);

							if (__context_tag == to_underlying(Fields::kNodeID)) {
								err = DataModel::Decode(reader, nodeID);
							} else if (__context_tag ==
								   to_underlying(Fields::kGroupKeySetID)) {
								err = DataModel::Decode(reader, groupKeySetID);
							} else if (__context_tag ==
								   to_underlying(Fields::kStatusEntry)) {
								err = DataModel::Decode(reader, statusEntry);
							}

							ReturnErrorOnFailure(err);
						}
					}

				} // namespace DatastoreNodeKeySetEntryStruct

				namespace DatastoreNodeInformationEntryStruct
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
						encoder.Encode(to_underlying(Fields::kNodeID), nodeID);
						encoder.Encode(to_underlying(Fields::kFriendlyName), friendlyName);
						encoder.Encode(to_underlying(Fields::kCommissioningStatusEntry),
							       commissioningStatusEntry);
						return encoder.Finalize();
					}

					CHIP_ERROR DecodableType::Decode(TLV::TLVReader &reader)
					{
						detail::StructDecodeIterator __iterator(reader);
						while (true) {
							uint8_t __context_tag = 0;
							CHIP_ERROR err = __iterator.Next(__context_tag);
							VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV,
									    CHIP_NO_ERROR);
							ReturnErrorOnFailure(err);

							if (__context_tag == to_underlying(Fields::kNodeID)) {
								err = DataModel::Decode(reader, nodeID);
							} else if (__context_tag ==
								   to_underlying(Fields::kFriendlyName)) {
								err = DataModel::Decode(reader, friendlyName);
							} else if (__context_tag ==
								   to_underlying(Fields::kCommissioningStatusEntry)) {
								err = DataModel::Decode(reader,
											commissioningStatusEntry);
							}

							ReturnErrorOnFailure(err);
						}
					}

				} // namespace DatastoreNodeInformationEntryStruct

				namespace DatastoreEndpointGroupIDEntryStruct
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
						encoder.Encode(to_underlying(Fields::kNodeID), nodeID);
						encoder.Encode(to_underlying(Fields::kEndpointID), endpointID);
						encoder.Encode(to_underlying(Fields::kGroupID), groupID);
						encoder.Encode(to_underlying(Fields::kStatusEntry), statusEntry);
						return encoder.Finalize();
					}

					CHIP_ERROR DecodableType::Decode(TLV::TLVReader &reader)
					{
						detail::StructDecodeIterator __iterator(reader);
						while (true) {
							uint8_t __context_tag = 0;
							CHIP_ERROR err = __iterator.Next(__context_tag);
							VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV,
									    CHIP_NO_ERROR);
							ReturnErrorOnFailure(err);

							if (__context_tag == to_underlying(Fields::kNodeID)) {
								err = DataModel::Decode(reader, nodeID);
							} else if (__context_tag ==
								   to_underlying(Fields::kEndpointID)) {
								err = DataModel::Decode(reader, endpointID);
							} else if (__context_tag == to_underlying(Fields::kGroupID)) {
								err = DataModel::Decode(reader, groupID);
							} else if (__context_tag ==
								   to_underlying(Fields::kStatusEntry)) {
								err = DataModel::Decode(reader, statusEntry);
							}

							ReturnErrorOnFailure(err);
						}
					}

				} // namespace DatastoreEndpointGroupIDEntryStruct

				namespace DatastoreEndpointEntryStruct
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
						encoder.Encode(to_underlying(Fields::kEndpointID), endpointID);
						encoder.Encode(to_underlying(Fields::kNodeID), nodeID);
						encoder.Encode(to_underlying(Fields::kFriendlyName), friendlyName);
						encoder.Encode(to_underlying(Fields::kStatusEntry), statusEntry);
						return encoder.Finalize();
					}

					CHIP_ERROR DecodableType::Decode(TLV::TLVReader &reader)
					{
						detail::StructDecodeIterator __iterator(reader);
						while (true) {
							uint8_t __context_tag = 0;
							CHIP_ERROR err = __iterator.Next(__context_tag);
							VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV,
									    CHIP_NO_ERROR);
							ReturnErrorOnFailure(err);

							if (__context_tag == to_underlying(Fields::kEndpointID)) {
								err = DataModel::Decode(reader, endpointID);
							} else if (__context_tag == to_underlying(Fields::kNodeID)) {
								err = DataModel::Decode(reader, nodeID);
							} else if (__context_tag ==
								   to_underlying(Fields::kFriendlyName)) {
								err = DataModel::Decode(reader, friendlyName);
							} else if (__context_tag ==
								   to_underlying(Fields::kStatusEntry)) {
								err = DataModel::Decode(reader, statusEntry);
							}

							ReturnErrorOnFailure(err);
						}
					}

				} // namespace DatastoreEndpointEntryStruct

				namespace DatastoreBindingTargetStruct
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
						encoder.Encode(to_underlying(Fields::kNode), node);
						encoder.Encode(to_underlying(Fields::kGroup), group);
						encoder.Encode(to_underlying(Fields::kEndpoint), endpoint);
						encoder.Encode(to_underlying(Fields::kCluster), cluster);
						return encoder.Finalize();
					}

					CHIP_ERROR DecodableType::Decode(TLV::TLVReader &reader)
					{
						detail::StructDecodeIterator __iterator(reader);
						while (true) {
							uint8_t __context_tag = 0;
							CHIP_ERROR err = __iterator.Next(__context_tag);
							VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV,
									    CHIP_NO_ERROR);
							ReturnErrorOnFailure(err);

							if (__context_tag == to_underlying(Fields::kNode)) {
								err = DataModel::Decode(reader, node);
							} else if (__context_tag == to_underlying(Fields::kGroup)) {
								err = DataModel::Decode(reader, group);
							} else if (__context_tag == to_underlying(Fields::kEndpoint)) {
								err = DataModel::Decode(reader, endpoint);
							} else if (__context_tag == to_underlying(Fields::kCluster)) {
								err = DataModel::Decode(reader, cluster);
							}

							ReturnErrorOnFailure(err);
						}
					}

				} // namespace DatastoreBindingTargetStruct

				namespace DatastoreEndpointBindingEntryStruct
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
						encoder.Encode(to_underlying(Fields::kNodeID), nodeID);
						encoder.Encode(to_underlying(Fields::kEndpointID), endpointID);
						encoder.Encode(to_underlying(Fields::kListID), listID);
						encoder.Encode(to_underlying(Fields::kBinding), binding);
						encoder.Encode(to_underlying(Fields::kStatusEntry), statusEntry);
						return encoder.Finalize();
					}

					CHIP_ERROR DecodableType::Decode(TLV::TLVReader &reader)
					{
						detail::StructDecodeIterator __iterator(reader);
						while (true) {
							uint8_t __context_tag = 0;
							CHIP_ERROR err = __iterator.Next(__context_tag);
							VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV,
									    CHIP_NO_ERROR);
							ReturnErrorOnFailure(err);

							if (__context_tag == to_underlying(Fields::kNodeID)) {
								err = DataModel::Decode(reader, nodeID);
							} else if (__context_tag ==
								   to_underlying(Fields::kEndpointID)) {
								err = DataModel::Decode(reader, endpointID);
							} else if (__context_tag == to_underlying(Fields::kListID)) {
								err = DataModel::Decode(reader, listID);
							} else if (__context_tag == to_underlying(Fields::kBinding)) {
								err = DataModel::Decode(reader, binding);
							} else if (__context_tag ==
								   to_underlying(Fields::kStatusEntry)) {
								err = DataModel::Decode(reader, statusEntry);
							}

							ReturnErrorOnFailure(err);
						}
					}

				} // namespace DatastoreEndpointBindingEntryStruct

				namespace DatastoreAccessControlTargetStruct
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
						encoder.Encode(to_underlying(Fields::kCluster), cluster);
						encoder.Encode(to_underlying(Fields::kEndpoint), endpoint);
						encoder.Encode(to_underlying(Fields::kDeviceType), deviceType);
						return encoder.Finalize();
					}

					CHIP_ERROR DecodableType::Decode(TLV::TLVReader &reader)
					{
						detail::StructDecodeIterator __iterator(reader);
						while (true) {
							uint8_t __context_tag = 0;
							CHIP_ERROR err = __iterator.Next(__context_tag);
							VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV,
									    CHIP_NO_ERROR);
							ReturnErrorOnFailure(err);

							if (__context_tag == to_underlying(Fields::kCluster)) {
								err = DataModel::Decode(reader, cluster);
							} else if (__context_tag == to_underlying(Fields::kEndpoint)) {
								err = DataModel::Decode(reader, endpoint);
							} else if (__context_tag ==
								   to_underlying(Fields::kDeviceType)) {
								err = DataModel::Decode(reader, deviceType);
							}

							ReturnErrorOnFailure(err);
						}
					}

				} // namespace DatastoreAccessControlTargetStruct

				namespace DatastoreAccessControlEntryStruct
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
						encoder.Encode(to_underlying(Fields::kPrivilege), privilege);
						encoder.Encode(to_underlying(Fields::kAuthMode), authMode);
						encoder.Encode(to_underlying(Fields::kSubjects), subjects);
						encoder.Encode(to_underlying(Fields::kTargets), targets);
						return encoder.Finalize();
					}

					CHIP_ERROR DecodableType::Decode(TLV::TLVReader &reader)
					{
						detail::StructDecodeIterator __iterator(reader);
						while (true) {
							uint8_t __context_tag = 0;
							CHIP_ERROR err = __iterator.Next(__context_tag);
							VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV,
									    CHIP_NO_ERROR);
							ReturnErrorOnFailure(err);

							if (__context_tag == to_underlying(Fields::kPrivilege)) {
								err = DataModel::Decode(reader, privilege);
							} else if (__context_tag == to_underlying(Fields::kAuthMode)) {
								err = DataModel::Decode(reader, authMode);
							} else if (__context_tag == to_underlying(Fields::kSubjects)) {
								err = DataModel::Decode(reader, subjects);
							} else if (__context_tag == to_underlying(Fields::kTargets)) {
								err = DataModel::Decode(reader, targets);
							}

							ReturnErrorOnFailure(err);
						}
					}

				} // namespace DatastoreAccessControlEntryStruct

				namespace DatastoreACLEntryStruct
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
						encoder.Encode(to_underlying(Fields::kNodeID), nodeID);
						encoder.Encode(to_underlying(Fields::kListID), listID);
						encoder.Encode(to_underlying(Fields::kACLEntry), ACLEntry);
						encoder.Encode(to_underlying(Fields::kStatusEntry), statusEntry);
						return encoder.Finalize();
					}

					CHIP_ERROR DecodableType::Decode(TLV::TLVReader &reader)
					{
						detail::StructDecodeIterator __iterator(reader);
						while (true) {
							uint8_t __context_tag = 0;
							CHIP_ERROR err = __iterator.Next(__context_tag);
							VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV,
									    CHIP_NO_ERROR);
							ReturnErrorOnFailure(err);

							if (__context_tag == to_underlying(Fields::kNodeID)) {
								err = DataModel::Decode(reader, nodeID);
							} else if (__context_tag == to_underlying(Fields::kListID)) {
								err = DataModel::Decode(reader, listID);
							} else if (__context_tag == to_underlying(Fields::kACLEntry)) {
								err = DataModel::Decode(reader, ACLEntry);
							} else if (__context_tag ==
								   to_underlying(Fields::kStatusEntry)) {
								err = DataModel::Decode(reader, statusEntry);
							}

							ReturnErrorOnFailure(err);
						}
					}

				} // namespace DatastoreACLEntryStruct

				namespace DatastoreAdministratorInformationEntryStruct
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
						encoder.Encode(to_underlying(Fields::kNodeID), nodeID);
						encoder.Encode(to_underlying(Fields::kFriendlyName), friendlyName);
						encoder.Encode(to_underlying(Fields::kVendorID), vendorID);
						encoder.Encode(to_underlying(Fields::kIcac), icac);
						return encoder.Finalize();
					}

					CHIP_ERROR DecodableType::Decode(TLV::TLVReader &reader)
					{
						detail::StructDecodeIterator __iterator(reader);
						while (true) {
							uint8_t __context_tag = 0;
							CHIP_ERROR err = __iterator.Next(__context_tag);
							VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV,
									    CHIP_NO_ERROR);
							ReturnErrorOnFailure(err);

							if (__context_tag == to_underlying(Fields::kNodeID)) {
								err = DataModel::Decode(reader, nodeID);
							} else if (__context_tag ==
								   to_underlying(Fields::kFriendlyName)) {
								err = DataModel::Decode(reader, friendlyName);
							} else if (__context_tag == to_underlying(Fields::kVendorID)) {
								err = DataModel::Decode(reader, vendorID);
							} else if (__context_tag == to_underlying(Fields::kIcac)) {
								err = DataModel::Decode(reader, icac);
							}

							ReturnErrorOnFailure(err);
						}
					}

				} // namespace DatastoreAdministratorInformationEntryStruct

				namespace DatastoreGroupInformationEntryStruct
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
						encoder.Encode(to_underlying(Fields::kGroupID), groupID);
						encoder.Encode(to_underlying(Fields::kFriendlyName), friendlyName);
						encoder.Encode(to_underlying(Fields::kGroupKeySetID), groupKeySetID);
						encoder.Encode(to_underlying(Fields::kGroupCAT), groupCAT);
						encoder.Encode(to_underlying(Fields::kGroupCATVersion),
							       groupCATVersion);
						encoder.Encode(to_underlying(Fields::kGroupPermission),
							       groupPermission);
						return encoder.Finalize();
					}

					CHIP_ERROR DecodableType::Decode(TLV::TLVReader &reader)
					{
						detail::StructDecodeIterator __iterator(reader);
						while (true) {
							uint8_t __context_tag = 0;
							CHIP_ERROR err = __iterator.Next(__context_tag);
							VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV,
									    CHIP_NO_ERROR);
							ReturnErrorOnFailure(err);

							if (__context_tag == to_underlying(Fields::kGroupID)) {
								err = DataModel::Decode(reader, groupID);
							} else if (__context_tag ==
								   to_underlying(Fields::kFriendlyName)) {
								err = DataModel::Decode(reader, friendlyName);
							} else if (__context_tag ==
								   to_underlying(Fields::kGroupKeySetID)) {
								err = DataModel::Decode(reader, groupKeySetID);
							} else if (__context_tag == to_underlying(Fields::kGroupCAT)) {
								err = DataModel::Decode(reader, groupCAT);
							} else if (__context_tag ==
								   to_underlying(Fields::kGroupCATVersion)) {
								err = DataModel::Decode(reader, groupCATVersion);
							} else if (__context_tag ==
								   to_underlying(Fields::kGroupPermission)) {
								err = DataModel::Decode(reader, groupPermission);
							}

							ReturnErrorOnFailure(err);
						}
					}

				} // namespace DatastoreGroupInformationEntryStruct

				namespace DatastoreGroupKeySetStruct
				{
					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
						encoder.Encode(to_underlying(Fields::kGroupKeySetID), groupKeySetID);
						encoder.Encode(to_underlying(Fields::kGroupKeySecurityPolicy),
							       groupKeySecurityPolicy);
						encoder.Encode(to_underlying(Fields::kEpochKey0), epochKey0);
						encoder.Encode(to_underlying(Fields::kEpochStartTime0),
							       epochStartTime0);
						encoder.Encode(to_underlying(Fields::kEpochKey1), epochKey1);
						encoder.Encode(to_underlying(Fields::kEpochStartTime1),
							       epochStartTime1);
						encoder.Encode(to_underlying(Fields::kEpochKey2), epochKey2);
						encoder.Encode(to_underlying(Fields::kEpochStartTime2),
							       epochStartTime2);
						encoder.Encode(to_underlying(Fields::kGroupKeyMulticastPolicy),
							       groupKeyMulticastPolicy);
						return encoder.Finalize();
					}

					CHIP_ERROR DecodableType::Decode(TLV::TLVReader &reader)
					{
						detail::StructDecodeIterator __iterator(reader);
						while (true) {
							uint8_t __context_tag = 0;
							CHIP_ERROR err = __iterator.Next(__context_tag);
							VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV,
									    CHIP_NO_ERROR);
							ReturnErrorOnFailure(err);

							if (__context_tag == to_underlying(Fields::kGroupKeySetID)) {
								err = DataModel::Decode(reader, groupKeySetID);
							} else if (__context_tag ==
								   to_underlying(Fields::kGroupKeySecurityPolicy)) {
								err = DataModel::Decode(reader, groupKeySecurityPolicy);
							} else if (__context_tag == to_underlying(Fields::kEpochKey0)) {
								err = DataModel::Decode(reader, epochKey0);
							} else if (__context_tag ==
								   to_underlying(Fields::kEpochStartTime0)) {
								err = DataModel::Decode(reader, epochStartTime0);
							} else if (__context_tag == to_underlying(Fields::kEpochKey1)) {
								err = DataModel::Decode(reader, epochKey1);
							} else if (__context_tag ==
								   to_underlying(Fields::kEpochStartTime1)) {
								err = DataModel::Decode(reader, epochStartTime1);
							} else if (__context_tag == to_underlying(Fields::kEpochKey2)) {
								err = DataModel::Decode(reader, epochKey2);
							} else if (__context_tag ==
								   to_underlying(Fields::kEpochStartTime2)) {
								err = DataModel::Decode(reader, epochStartTime2);
							} else if (__context_tag ==
								   to_underlying(Fields::kGroupKeyMulticastPolicy)) {
								err = DataModel::Decode(reader,
											groupKeyMulticastPolicy);
							}

							ReturnErrorOnFailure(err);
						}
					}

				} // namespace DatastoreGroupKeySetStruct
			} // namespace Structs
		} // namespace JointFabricDatastore
	} // namespace Clusters
} // namespace app
} // namespace chip
