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
#include <hidl/HidlTransportSupport.h>

#include "XiaomiFingerprint.h"

using android::hardware::configureRpcThreadpool;
using android::hardware::joinRpcThreadpool;

using android::OK;
using android::sp;
using android::status_t;

using ::vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint;
using ::vendor::xiaomi::hardware::fingerprintextension::V1_0::implementation::XiaomiFingerprint;

int main() {
    sp<IXiaomiFingerprint> service = new XiaomiFingerprint();

    configureRpcThreadpool(1, true);

    status_t status = service->registerAsService();
    if (status != OK) {
        ALOGE("Cannot register XiaomiFingerprint HAL service.");
        return 1;
    }

    ALOGI("XiaomiFingerprint HAL service ready.");

    joinRpcThreadpool();

    ALOGI("XiaomiFingerprint HAL service failed to join thread pool.");
    return 1;
}
