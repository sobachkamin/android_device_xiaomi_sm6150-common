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

#define LOG_TAG "vendor.xiaomi.hardware.fingerprintextension@1.0-service.xiaomi_sm6150"

#include <android-base/logging.h>

#include "XiaomiFingerprint.h"

namespace vendor {
namespace xiaomi {
namespace hardware {
namespace fingerprintextension {
namespace V1_0 {
namespace implementation {

Return<int32_t> XiaomiFingerprint::extCmd(int32_t /*cmd*/, int32_t /*param*/) {
    //return mDevice->extCmd(mDevice, cmd, param);
	return 0;
}

} // namespace implementation
}  // namespace V1_0
}  // namespace fingerprintextension
}  // namespace hardware
}  // namespace xiaomi
}  // namespace vendor
