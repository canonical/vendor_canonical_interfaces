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

#ifndef VENDOR_CANONICAL_INTERFACES_VEHICLE_V1_0_H
#define VENDOR_CANONICAL_INTERFACES_VEHICLE_V1_0_H

#include <vendor/canonical/interfaces/vehicle/1.0/IVehicle.h>
#include <android/hardware/automotive/vehicle/2.0/IVehicle.h> // For the shared types

using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::hardware::automotive::vehicle::V2_0::StatusCode;
using ::android::hardware::automotive::vehicle::V2_0::VehiclePropValue;

namespace vendor {
namespace canonical {
namespace interfaces {
namespace vehicle {
namespace V1_0 {
class VHalService : public IVehicle {
  public:
    // Methods from ::vendor::canonical::interfaces::vehicle::V1_0 follow.
    Return<void> get(const VehiclePropValue& requestedPropValue,
                     IVehicle::get_cb _hidl_cb)  override;
    Return<StatusCode> set(const VehiclePropValue& value)  override;
};
}  // namespace V1_0
}  // namespace vehicle
}  // namespace interfaces
}  // namespace canonical
}  // namespace vendor

#endif  // VENDOR_CANONICAL_INTERFACES_VEHICLE_V1_0_H
