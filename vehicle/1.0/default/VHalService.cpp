/*
 * Copyright 2024 Canonical Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "VHalService.h"
#include <binder/IPCThreadState.h>
#include <private/android_filesystem_config.h>

namespace {
const VehiclePropValue kEmptyValue{};
} // namespace

namespace vendor {
namespace canonical {
namespace interfaces {
namespace vehicle {
namespace V1_0 {
Return<void> VHalService::get(
    const VehiclePropValue& requestedPropValue, IVehicle::get_cb _hidl_cb) {
  uid_t uid = android::IPCThreadState::self()->getCallingUid();
  if (uid != AID_VEHICLE_NETWORK) {
    _hidl_cb(StatusCode::ACCESS_DENIED, kEmptyValue);
    return Void();
  }

  // Unimplemented
  // NOTE: a VHAL implementation must allow access to non-readable vehicle properties.
  return Void();
}

Return<StatusCode> VHalService::set(const VehiclePropValue& value) {
  uid_t uid = android::IPCThreadState::self()->getCallingUid();
  if (uid != AID_VEHICLE_NETWORK)
    return StatusCode::ACCESS_DENIED;

  // Unimplemented
  // NOTE: a VHAL implementation must allow modification of non-writable vehicle properties.
  return StatusCode::NOT_AVAILABLE;
}
}  // namespace V1_0
}  // namespace vehicle
}  // namespace interfaces
}  // namespace canonical
}  // namespace vendor
