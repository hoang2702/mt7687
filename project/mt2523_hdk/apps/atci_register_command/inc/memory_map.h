#ifndef __MEMORY_MAP_H__
#define __MEMORY_MAP_H__

#define BL_BASE    0x08000000
#define BL_LENGTH  0x00010000    /* 64kB */

#define RTOS_BASE    0x08010000
#define RTOS_LENGTH  0x001E0000   /* 1920K */

#define FOTA_RESERVED_BASE    0x08200000
#define FOTA_RESERVED_LENGTH  0x001E0000   /* 1920K */
#define ROM_NVDM_BASE    0x083E0000
#define ROM_NVDM_LENGTH  0x00010000   /* 64kB */

#define ROM_EPO_BASE    0x083F0000
#define ROM_EPO_LENGTH  0x00010000   /* 64kB */


#define RAM_BASE    0x00000000
#define RAM_LENGTH  0x00200000   /* 2048kB */

#define VRAM_BASE    0x10000000
#define VRAM_LENGTH  0x00200000   /* 2048kB */

#define TCM_BASE      0x04008000
#define TCM_LENGTH    0x00020000  /* 128kB */


#endif
