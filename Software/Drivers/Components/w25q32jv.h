/**
  ******************************************************************************
  * @file    w25q32jv.h
  * @author  Sebastian Madsen
  * @brief   This file contains all the description of the W25Q32JV QSPI memory.
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef w25q32jv_H
#define w25q32jv_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/

/**
  * @brief W25Q32JV Configuration
  */
#define W25Q32JV_FLASH_SIZE                  0x2000000 /* 32 MBits => 4 MBytes */
#define W25Q32JV_SECTOR_SIZE                 0x10000   /* 64 blocks/sectors of 64KBytes */
#define W25Q32JV_SUBSECTOR_SIZE              0x1000    /* 16 sectors/subsectors of 4kBytes */
#define W25Q32JV_PAGE_SIZE                   0x100     /* 16384 pages of 256 bytes */

#define W25Q32JV_DUMMY_CYCLES_READ_QUAD      3
#define W25Q32JV_DUMMY_CYCLES_READ           1
#define W25Q32JV_DUMMY_CYCLES_READ_QUAD_IO   2

#define W25Q32JV_BULK_ERASE_MAX_TIME         50000
#define W25Q32JV_SECTOR_ERASE_MAX_TIME       2000
#define W25Q32JV_SUBSECTOR_ERASE_MAX_TIME    400

/**
  * @brief W25Q32JV Commands
  */
/* Reset Operations */
#define RESET_ENABLE_CMD                     0x66
#define RESET_MEMORY_CMD                     0x99

/* Identification Operations */
#define READ_ID_CMD                          0x9F
#define MULTIPLE_IO_READ_ID_CMD              0x94

/* Read Operations */
#define READ_CMD                             0x03
#define FAST_READ_CMD                        0x0B
#define DUAL_OUT_FAST_READ_CMD               0x3B
#define DUAL_INOUT_FAST_READ_CMD             0xBB
#define QUAD_OUT_FAST_READ_CMD               0x6B
#define QUAD_INOUT_FAST_READ_CMD             0xEB

/* Write Operations */
#define WRITE_ENABLE_CMD                     0x06
#define WRITE_DISABLE_CMD                    0x04

/* Register Operations */
#define READ_STATUS_REG1_CMD                 0x05
#define READ_STATUS_REG2_CMD                 0x35
#define READ_STATUS_REG3_CMD                 0x15
#define WRITE_STATUS_REG1_CMD             	 0x01
#define WRITE_STATUS_REG2_CMD             	 0x31
#define WRITE_STATUS_REG3_CMD             	 0x11

#define READ_LOCK_REG_CMD                    0x3D
#define WRITE_LOCK_REG_CMD                   0x36

/* Program Operations */
#define PAGE_PROG_CMD                        0x02
#define QUAD_IN_FAST_PROG_CMD                0x32

/* Erase Operations */
#define SUBSECTOR_ERASE_CMD                  0x20
#define SECTOR_ERASE_CMD                     0xD8
#define BULK_ERASE_CMD                       0xC7
#define PROG_ERASE_RESUME_CMD                0x7A
#define PROG_ERASE_SUSPEND_CMD               0x75

/**
  * @brief W25Q32JV Registers
  */
/* Status Register 1 */
#define W25Q32JV_SR1_WIP                     ((uint8_t)0x01)    /*!< Write in progress */
#define W25Q32JV_SR1_WREN                    ((uint8_t)0x02)    /*!< Write enable latch */
#define W25Q32JV_SR1_BLOCKPR                 ((uint8_t)0x1C)    /*!< Block protected against program and erase operations */
#define W25Q32JV_SR1_PRBOTTOM                ((uint8_t)0x20)    /*!< Protected memory area defined by BLOCKPR starts from top or bottom */
#define W25Q32JV_SR1_SEC					 ((uint8_t)0x40)	/*!< Controls whether 4kb or 64kb sectors/blovks are protected */
#define W25Q32JV_SR1_SRWREN                  ((uint8_t)0x80)    /*!< Status register write enable/disable */

/* Status Register 2 */
#define W25Q32JV_SR2_SRL                     ((uint8_t)0x01)    /*!< Status Register lock */
#define W25Q32JV_SR2_QE                      ((uint8_t)0x02)    /*!< Quad-mode enabled if = 1 */
#define W25Q32JV_SR2_LB                      ((uint8_t)0x38)    /*!< Security Register Lock one-time-program bits */
#define W25Q32JV_SR2_CMP                     ((uint8_t)0x40)    /*!< Complement Protect; reverses protection bits */
#define W25Q32JV_SR2_SUS                     ((uint8_t)0x80)    /*!< Erase/Program Suspend Status, 1 while executing 0x75 */

/* Status Register 3 */
#define W25Q32JV_SR3_ODS                     ((uint8_t)0x60)    /*!< Output driver strength */
#define W25Q32JV_SR3_ODS_25                  ((uint8_t)0x60)    /*!< Output driver strength 25% (default)*/
#define W25Q32JV_SR3_ODS_50                  ((uint8_t)0x40)    /*!< Output driver strength 50% */
#define W25Q32JV_SR3_ODS_75                  ((uint8_t)0x20)    /*!< Output driver strength 75% */
#define W25Q32JV_SR3_ODS_100                 ((uint8_t)0x00)    /*!< Output driver strength 100% */
#define W25Q32JV_SR3_WPS                     ((uint8_t)0x04)    /*!< Write Protect Selection, indicates which scheme to use */

#ifdef __cplusplus
}
#endif

#endif /* w25q32jv_H */

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

