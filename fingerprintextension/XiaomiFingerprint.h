/*
 * Copyright (C) 2021 The LineageOS Project
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

#ifndef VENDOR_XIAOMI_HARDWARE_FINGERPRINTEXTENSION_V1_0_XIAOMIFINGERPRINT_H
#define VENDOR_XIAOMI_HARDWARE_FINGERPRINTEXTENSION_V1_0_XIAOMIFINGERPRINT_H

#include <vendor/xiaomi/hardware/fingerprintextension/1.0/IXiaomiFingerprint.h>

namespace vendor {
namespace xiaomi {
namespace hardware {
namespace fingerprintextension {
namespace V1_0 {
namespace implementation {

using ::android::sp;
using ::android::hardware::Return;
using ::android::hardware::Void;

using ::vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint;

struct XiaomiFingerprint : public IXiaomiFingerprint {
public:
    // Methods from ::android::hardware::biometrics::fingerprint::V2_1::IXiaomiFingerprint follow.
    Return<int32_t> extCmd(int32_t cmd, int32_t param) override;
};

} // namespace implementation
}  // namespace V1_0
}  // namespace fingerprintextension
}  // namespace hardware
}  // namespace xiaomi
}  // namespace vendor

#endif  // VENDOR_XIAOMI_HARDWARE_FINGERPRINTEXTENSION_V1_0_XIAOMIFINGERPRINT_H
