/**
 * File Name: cvi_const_syslog.h
 *
 * Version: V1.0
 *
 * Brief: const of syslog type definition.
 *
 * Copyright (C) Cvitek Co., Ltd. 2019-2020. All rights reserved.
 *
 * Description:
 *
 * History			:
 *
 =====================================================================================
   1.Date 			:	2020/07/16
   Author 			:	garry.xin
   Modification		:	Created file
 *
 ====================================================================================*/
#ifndef _CVI_CONST_SYSLOG_H_
#define _CVI_CONST_SYSLOG_H_

#include "cvi_common_type.h"

#ifdef __cplusplus
extern "C" {
#endif
///////////////////////////////////////////////////////////////////////////
///   SYSLOG
///////////////////////////////////////////////////////////////////////////
typedef enum {
  E_CVI_SYSLOG_CLASS_FIRST = 0,
  E_CVI_SYSLOG_CLASS_INFO = E_CVI_SYSLOG_CLASS_FIRST,
  E_CVI_SYSLOG_CLASS_OPER,
  E_CVI_SYSLOG_CLASS_ALARM,
  E_CVI_SYSLOG_CLASS_SYSFAULT,
  E_CVI_SYSLOG_CLASS_NUM
} CVI_SYSLOG_CLASS_E;

// DAHUA
// SYSTEM OPERATION
// CONFIG OPERATION
// DATA MANAGE
// ALARM EVENT
// RECORD OPERATION
// USER OPERATION
// SYSLOG CLEAR
// IPC CONNECT LOG

// SYSTEM FAULT
// NO DISK
// DISK ERROR
// DISK FULL
// NETWORK DISCONNECT
// IP CONFLIC
// MAC CONFLIC

typedef cvi_uint32 CVI_SYSLOG_TYPE_E;

#define E_CVI_SYSLOG_TYPE_CLS_INFO_BASE (20000)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_BASE (40000)
#define E_CVI_SYSLOG_TYPE_CLS_ALARM_BASE (60000)
#define E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_BASE (80000)

////////////////////////////////////////////////////////////////////
/// E_CVI_SYSLOG_TYPE_CLS_INFO_BASE
////////////////////////////////////////////////////////////////////
#define E_CVI_SYSLOG_TYPE_CLS_INFO_HDD_INFO (E_CVI_SYSLOG_TYPE_CLS_INFO_BASE)
#define E_CVI_SYSLOG_TYPE_CLS_INFO_SMART_INFO                                  \
  (E_CVI_SYSLOG_TYPE_CLS_INFO_BASE + 1)
#define E_CVI_SYSLOG_TYPE_CLS_INFO_REC_START                                   \
  (E_CVI_SYSLOG_TYPE_CLS_INFO_BASE + 2)
#define E_CVI_SYSLOG_TYPE_CLS_INFO_REC_STOP                                    \
  (E_CVI_SYSLOG_TYPE_CLS_INFO_BASE + 3)
// delete overdue record files
#define E_CVI_SYSLOG_TYPE_CLS_INFO_REC_OVERDUE                                 \
  (E_CVI_SYSLOG_TYPE_CLS_INFO_BASE + 4)
// ipc link start
#define E_CVI_SYSLOG_TYPE_CLS_INFO_LINK_START                                  \
  (E_CVI_SYSLOG_TYPE_CLS_INFO_BASE + 5)
#define E_CVI_SYSLOG_TYPE_CLS_INFO_LINK_STOP                                   \
  (E_CVI_SYSLOG_TYPE_CLS_INFO_BASE + 6)
#define E_CVI_SYSLOG_TYPE_CLS_INFO_NET_DISK_INFO                               \
  (E_CVI_SYSLOG_TYPE_CLS_INFO_BASE + 7)
#define E_CVI_SYSLOG_TYPE_CLS_INFO_RAID_INFO                                   \
  (E_CVI_SYSLOG_TYPE_CLS_INFO_BASE + 8)
#define E_CVI_SYSLOG_TYPE_CLS_INFO_RUN_STATUS_INFO                             \
  (E_CVI_SYSLOG_TYPE_CLS_INFO_BASE + 9)
#define E_CVI_SYSLOG_TYPE_CLS_INFO_PIC_REC_START                               \
  (E_CVI_SYSLOG_TYPE_CLS_INFO_BASE + 10)
#define E_CVI_SYSLOG_TYPE_CLS_INFO_PIC_REC_STOP                                \
  (E_CVI_SYSLOG_TYPE_CLS_INFO_BASE + 11)
// delete overdue pic record file
#define E_CVI_SYSLOG_TYPE_CLS_INFO_PIC_REC_OVERDUE                             \
  (E_CVI_SYSLOG_TYPE_CLS_INFO_BASE + 12)
#define E_CVI_SYSLOG_TYPE_CLS_INFO_LOGIN (E_CVI_SYSLOG_TYPE_CLS_INFO_BASE + 13)
#define E_CVI_SYSLOG_TYPE_CLS_INFO_RELOGIN                                     \
  (E_CVI_SYSLOG_TYPE_CLS_INFO_BASE + 14)
#define E_CVI_SYSLOG_TYPE_CLS_INFO_LOGOUT (E_CVI_SYSLOG_TYPE_CLS_INFO_BASE + 15)
#define E_CVI_SYSLOG_TYPE_CLS_INFO_RECORD_ERR_INFO                             \
  (E_CVI_SYSLOG_TYPE_CLS_INFO_BASE + 16)
#define E_CVI_SYSLOG_TYPE_CLS_INFO_BUFFER_STATE                                \
  (E_CVI_SYSLOG_TYPE_CLS_INFO_BASE + 17)
#define E_CVI_SYSLOG_TYPE_CLS_INFO_DISK_ERRORINFO_V2                           \
  (E_CVI_SYSLOG_TYPE_CLS_INFO_BASE + 18)
#define E_CVI_SYSLOG_TYPE_CLS_INFO_NULL (E_CVI_SYSLOG_TYPE_CLS_INFO_BASE + 19)

////////////////////////////////////////////////////////////////////
/// E_CVI_SYSLOG_TYPE_CLS_ALARM_BASE
////////////////////////////////////////////////////////////////////
#define E_CVI_SYSLOG_TYPE_CLS_ALARM_ALARM_IN (E_CVI_SYSLOG_TYPE_CLS_ALARM_BASE)
#define E_CVI_SYSLOG_TYPE_CLS_ALARM_ALARM_OUT                                  \
  (E_CVI_SYSLOG_TYPE_CLS_ALARM_BASE + 1)
#define E_CVI_SYSLOG_TYPE_CLS_ALARM_MDET_START                                 \
  (E_CVI_SYSLOG_TYPE_CLS_ALARM_BASE + 2)
#define E_CVI_SYSLOG_TYPE_CLS_ALARM_MDET_STOP                                  \
  (E_CVI_SYSLOG_TYPE_CLS_ALARM_BASE + 3)
#define E_CVI_SYSLOG_TYPE_CLS_ALARM_TAMPER_START                               \
  (E_CVI_SYSLOG_TYPE_CLS_ALARM_BASE + 4)
#define E_CVI_SYSLOG_TYPE_CLS_ALARM_TAMPER_STOP                                \
  (E_CVI_SYSLOG_TYPE_CLS_ALARM_BASE + 5)
//#define E_CVI_SYSLOG_TYPE_CLS_ALARM_VIDEOLOSS_START
//(E_CVI_SYSLOG_TYPE_CLS_ALARM_BASE+6) #define
// E_CVI_SYSLOG_TYPE_CLS_ALARM_VIDEOLOSS_STOP
//(E_CVI_SYSLOG_TYPE_CLS_ALARM_BASE+7)

////////////////////////////////////////////////////////////////////
/// E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_BASE
////////////////////////////////////////////////////////////////////
#define E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_DISK_FULL                               \
  (E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_BASE)
#define E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_DISK_ERROR                              \
  (E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_BASE + 1)
#define E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_IP_CONFLIC                              \
  (E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_BASE + 2)
#define E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_NET_BROKEN                              \
  (E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_BASE + 3)
#define E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_REC_ERROR                               \
  (E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_BASE + 4)
#define E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_IPC_NOLINK                              \
  (E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_BASE + 5)
#define E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_IPC_IP_CONFLIC                          \
  (E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_BASE + 6)
#define E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_PIC_REC_ERROR                           \
  (E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_BASE + 7)
#define E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_RECORD_OVERFLOW                         \
  (E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_BASE + 8)
#define E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_RAID_ERROR                              \
  (E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_BASE + 9)
#define E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_ILLEGAL_ACCESS                          \
  (E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_BASE + 10)
#define E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_POE_POWER_EXCEPTION                     \
  (E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_BASE + 11)
//#define E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_SENCE_EXCEPTION
//(E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_BASE+1) #define
// E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_UPLOAD_DATA_CS_EXCEPTION
//(E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_BASE+1) #define
// E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_SYNC_IPC_PASSWD
//(E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_BASE+1) #define
// E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_IPCM_CRASH
//(E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_BASE+1) #define
// E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_SYNC_IPC_PASSWD
//(E_CVI_SYSLOG_TYPE_CLS_SYSFAULT_BASE+1)

////////////////////////////////////////////////////////////////////
/// E_CVI_SYSLOG_TYPE_CLS_OPER_BASE
////////////////////////////////////////////////////////////////////
#define E_CVI_SYSLOG_TYPE_CLS_OPER_BOOT_NVR (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_SHUTDOWN_NVR                                \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 1)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_SHUTDOWN                             \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 2)

// abnormal shutdown
#define E_CVI_SYSLOG_TYPE_CLS_OPER_SHUTDOWN_ABNORMAL                           \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 3)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REBOOT_NVR                                  \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 4)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_REBOOT                               \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 5)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_LOGIN                                 \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 6)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_LOGOUT                                \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 7)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_LOGIN                                \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 8)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_LOGOUT                               \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 9)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_CFG_PARM                              \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 10)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_GET_PARM                             \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 11)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_CFG_PARM                             \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 12)
// play by file/play by time
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_PLAYBYFILE                            \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 13)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_PLAYBYTIME                            \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 14)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_PLAYBYFILE                           \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 15)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_PLAYBYTIME                           \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 16)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_START_REC                             \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 17)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_STOP_REC                              \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 18)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_START_REC                            \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 19)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_STOP_REC                             \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 20)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_PTZCTRL                               \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 21)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_PTZCTRL                              \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 22)
// all operation been locked
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_OPERATE_LOCK                          \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 23)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_OPERATE_UNLOCK                        \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 24)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_LOCKFILE                              \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 25)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_UNLOCKFILE                            \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 26)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_LOCKFILE                             \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 27)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_UNLOCKFILE                           \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 28)

#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_UPGRADE                               \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 29)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_UPGRADE                              \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 30)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_IPC_UPGRADE                           \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 31)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_IPC_UPGRADE                          \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 32)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_FORMAT_HDD                            \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 33)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_FORMAT_HDD                           \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 34)

#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_CFGFILE_EXPORT                        \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 35)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_CFGFILE_IMPORT                        \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 36)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_CFGFILE_EXPORT                       \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 37)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_CFGFILE_IMPORT                       \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 38)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_MANUAL_ALARM                          \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 39)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_MANUAL_ALARM                         \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 40)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_IPC_ADD                                     \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 41)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_IPC_DEL                                     \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 42)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_IPC_SET                                     \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 43)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_IPC_ADD                              \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 44)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_IPC_DEL                              \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 45)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_IPC_SET                              \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 46)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_ADD_NAS                               \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 47)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_DEL_NAS                               \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 48)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_SET_NAS                               \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 49)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_ADD_NAS                              \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 50)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_DEL_NAS                              \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 51)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_SET_NAS                              \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 52)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_START_REC_CDRW                        \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 53)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_STOP_REC_CDRW                         \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 54)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_START_REC_CDRW                       \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 55)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_STOP_REC_CDRW                        \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 56)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_LOAD_HDISK                            \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 57)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_LOAD_HDISK                           \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 58)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_UNLOAD_HDISK                         \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 59)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_DELETE_HDISK                          \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 60)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_DELETE_HDISK                         \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 61)
// spare disk
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_CONF_SPARE                            \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 62)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_ADD_RAID                              \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 63)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_DEL_RAID                              \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 64)
// migrade
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_MIG_RAID                              \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 65)
// rebuild
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_QUICK_CONF_RAID                       \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 66)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_CONF_SPARE                           \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 67)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_ADD_RAID                             \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 68)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_DEL_RAID                             \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 69)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_MIG_RAID                             \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 70)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_QUICK_CONF_RAID                      \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 71)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_ADD_VD                                \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 72)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_DEL_VD                                \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 73)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_RP_VD                                 \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 74)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_FORMAT_EXPANDVD                       \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 75)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_ADD_VD                               \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 76)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_DEL_VD                               \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 77)
// RP(repair)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_RP_VD                                \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 78)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_FORMAT_EXPANDVD                      \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 79)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_STOP_RAID                             \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 80)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_STOP_RAID                            \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 81)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_RAID_UPGRADE                          \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 82)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_RAID_UPGRADE                         \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 83)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_SET_SNMP                              \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 84)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_SET_SNMP                             \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 85)

#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_START_PIC_REC                         \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 86)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_STOP_PIC_REC                          \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 87)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_START_PIC_REC                        \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 88)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_STOP_PIC_REC                         \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 89)
// record tag operations
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_TAG_OPT                               \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 90)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_TAG_OPT                              \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 91)

#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_SPARE_OPT                             \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 92)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_SPARE_OPT                            \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 93)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_IPCCFGFILE_EXPORT                     \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 94)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_IPCCFGFILE_IMPORT                     \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 95)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_IPCCFGFILE_EXPORT                    \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 96)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_IPCCFGFILE_IMPORT                    \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 97)

// no remote's responsing item
// PCIE LINK switch
#define E_CVI_SYSLOG_TYPE_CLS_OPER_MU_SWITCH                                   \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 98)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_MU_PTZ (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 99)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_PREVIEW                               \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 100)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_MODIFY_TIME                           \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 101)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_RECFILE_BACKUP                        \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 102)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_COPYFILE                              \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 103)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_COPYFILE_START_TIME                   \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 104)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_COPYFILE_END_TIME                     \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 105)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_START_BACKUP                          \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 106)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_STOP_BACKUP                           \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 107)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_IMPORT_FILE                           \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 108)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_START_TRANS_CHAN                            \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 109)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_STOP_TRANS_CHAN                             \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 110)
// video talking
#define E_CVI_SYSLOG_TYPE_CLS_OPER_START_VT                                    \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 111)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_STOP_VT                                     \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 112)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_PIC_EXPORT                            \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 113)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_DBDATA_EXPORT                               \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 114)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_DBDATA_IMPORT                               \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 115)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_CONF_REB_RAID                         \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 116)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_CONF_REB_RAID                        \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 117)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_REB_RAID                              \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 118)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_REB_RAID                             \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 119)
// local video output switch(hdmi/vga)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_LOCAL_VOUT_SWITCH                           \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 120)
// change stream's codec
#define E_CVI_SYSLOG_TYPE_CLS_OPER_STREAM_CODEC                                \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 121)

// no local's responsing item
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_GET_STATUS                           \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 122)
// ALRAMS' TIMESCHED&ACTION SET
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_ALARM_PARAM                          \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 123)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_DISALARM_PARAM                       \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 124)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_RECFILE_EXPORT                       \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 125)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_SET_ALARMIN_CFG                      \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 126)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_GET_ALARMIN_CFG                      \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 127)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_SET_ALARMOUT_CFG                     \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 128)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_GET_ALARMOUT_CFG                     \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 129)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_ALARMOUT_OPEN_MAN                    \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 130)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_ALARMOUT_CLOSE_MAN                   \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 131)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_ALARM_ENABLE_CFG                     \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 132)

#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_CREATE_STORAGE_POOL                  \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 133)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_DEL_STORAGE_POOL                     \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 134)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_DEL_PIC                              \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 135)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_DEL_RECORD                           \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 136)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_CLOUD_ENABLE                         \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 137)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_CLOUD_DISABLE                        \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 138)
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_CLOUD_MODIFY_PARAM                   \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 139)
// cloud storage's volume
#define E_CVI_SYSLOG_TYPE_CLS_OPER_REMOTE_CLOUD_MODIFY_VOLUME                  \
  (E_CVI_SYSLOG_TYPE_CLS_OPER_BASE + 140)

#ifdef __cplusplus
}
#endif
#endif //_CVI_CONST_EVENT_H_