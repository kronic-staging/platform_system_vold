/*
 * Copyright (C) 2012 The Android Open Source Project
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

#pragma once

#include <fstab/fstab.h>

extern android::fs_mgr::Fstab fstab_default;

#define DATA_MNT_POINT "/data"
#define METADATA_MNT_POINT "/metadata"

#ifdef CONFIG_HW_DISK_ENCRYPT_PERF
void get_blkdev_start_sector(int fd, unsigned long* st_sec);
#endif
