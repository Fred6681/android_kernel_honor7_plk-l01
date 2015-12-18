/******************************************************************************

  Copyright(C)2008,Hisilicon Co. LTD.

 ******************************************************************************
  File Name       : NasEmmSmsMsgProc.h
  Description     : NasEmmSmsMsgProc.c header file
  History         :
      1.sunbing 49683       2011-11-3   Draft Enact

******************************************************************************/

#ifndef __NASEMMSMSMSGPROC_H__
#define __NASEMMSMSMSGPROC_H__

/*****************************************************************************
  1 Include Headfile
*****************************************************************************/
/*****************************************************************************
  1.1 Cplusplus Announce
*****************************************************************************/
#ifdef __cplusplus
#if __cplusplus
    extern "C" {
#endif
#endif
/*****************************************************************************
#pragma pack(*)    设置字节对齐方式
*****************************************************************************/
#if (VOS_OS_VER != VOS_WIN32)
#pragma pack(4)
#else
#pragma pack(push, 4)
#endif



/*****************************************************************************
  2 Macro
*****************************************************************************/
/* 打包SMS消息头 */
#define NAS_LMM_COMP_SMS_MSG_HEADER(pMsg, ulMsgLengthWithoutHeader) \
            {\
                (pMsg)->ulSenderCpuId       = VOS_LOCAL_CPUID; \
                (pMsg)->ulSenderPid         = PS_PID_MM; \
                (pMsg)->ulReceiverCpuId     = VOS_LOCAL_CPUID; \
                (pMsg)->ulReceiverPid       = WUEPS_PID_SMS; \
                (pMsg)->ulLength            = (ulMsgLengthWithoutHeader); \
            }


/*****************************************************************************
  3 Massage Declare
*****************************************************************************/


/*****************************************************************************
  4 Enum
*****************************************************************************/


/*****************************************************************************
  5 STRUCT
*****************************************************************************/


/*****************************************************************************
  6 UNION
*****************************************************************************/


/*****************************************************************************
  7 Extern Global Variable
*****************************************************************************/


/*****************************************************************************
  8 Fuction Extern
*****************************************************************************/


/*****************************************************************************
  9 OTHERS
*****************************************************************************/









#if (VOS_OS_VER != VOS_WIN32)
#pragma pack()
#else
#pragma pack(pop)
#endif

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif


#endif /* end of NasEmmSmsMsgProc.h */
