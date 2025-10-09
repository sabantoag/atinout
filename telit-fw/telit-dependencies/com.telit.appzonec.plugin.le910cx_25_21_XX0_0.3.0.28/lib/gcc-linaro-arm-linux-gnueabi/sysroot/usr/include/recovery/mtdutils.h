/*
 * Copyright (C) 2007 The Android Open Source Project
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

#ifndef MTDUTILS_H_
#define MTDUTILS_H_

#include <sys/types.h>  // for size_t, etc.

#ifdef __cplusplus
extern "C" {
#endif

#define OUT

typedef unsigned long long RB_UINT64;

struct MtdPartition {
    int device_index;
    unsigned int size;
    unsigned int erase_size;
    char *name;
};
typedef struct MtdPartition MtdPartition;

int mtd_scan_partitions(void);

const MtdPartition *mtd_find_partition_by_name(const char *name);
const MtdPartition *mtd_find_partition_by_device_name(const char *device_name);
const MtdPartition *mtd_find_partition_by_address (unsigned long long abs_address, OUT unsigned int* offset);
int mtd_get_partition_address_and_size(const char * name, unsigned long long * start_address,unsigned int * size);

/* mount_point is like "/system"
 * filesystem is like "yaffs2"
 */
int mtd_mount_partition(const MtdPartition *partition, const char *mount_point,
        const char *filesystem, int read_only,char * device);

/* get the partition and the minimum erase/write block size.  NULL is ok.
 */
int mtd_partition_info(const MtdPartition *partition,
        size_t *total_size, size_t *erase_size, size_t *write_size);

/* read or write raw data from a partition, starting at the beginning.
 * skips bad blocks as best we can.
 */
typedef struct MtdReadContext MtdReadContext;
typedef struct MtdWriteContext MtdWriteContext;

MtdReadContext *mtd_read_partition(const MtdPartition *);
ssize_t mtd_read_data(MtdReadContext *, char *data, size_t data_len);
void mtd_read_close(MtdReadContext *);
long int mtd_read_skip_to(const MtdReadContext *, long int offset);
int get_read_fd (const MtdReadContext* ctx);

MtdWriteContext *mtd_write_partition(const MtdPartition *);
ssize_t mtd_write_data(MtdWriteContext *, const char *data, size_t data_len);
off_t mtd_erase_blocks(MtdWriteContext *, int blocks);  /* 0 ok, -1 for all */
long int mtd_write_skip_to(const MtdWriteContext *, long int offset);
int get_write_fd (const MtdWriteContext* ctx);
int mtd_write_close(MtdWriteContext *);

#ifdef __cplusplus
}
#endif

#endif  // MTDUTILS_H_
