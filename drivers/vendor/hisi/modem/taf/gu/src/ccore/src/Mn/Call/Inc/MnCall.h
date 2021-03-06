
#ifndef  MN_CALL_H
#define  MN_CALL_H

/*****************************************************************************
  1 头文件包含
*****************************************************************************/
#include "vos.h"
#include "product_config.h"
#include "TafMmcInterface.h"
#include "MnCallMgmt.h"
#include "MnComm.h"
#include "TafLog.h"

#if (FEATURE_ON == FEATURE_PTM)
#include "NasErrorLog.h"
#endif

#include  "MnCallApi.h"
#include  "VcCallInterface.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#pragma pack(4)

/*****************************************************************************
  2 常量定义
*****************************************************************************/

/* Max number of supported codecs in BC*/
#define MN_CALL_BC_MAX_SPH_VER_NUM          (6)





/*****************************************************************************
  3类型定义
*****************************************************************************/
typedef struct
{
    VOS_UINT32                  ulStatus;                                       /*是否激活，0不激活，1激活 */
    VOS_UINT32                  ulCustomizeService;                             /*终端说明书是1个byte，为了没有空洞，扩充成4byte，高3byte保留*/
}MN_CALL_NV_ITEM_CUSTOMIZE_SERV_STRU;








typedef struct
{
    TAF_FDN_CONFIG_STRU                   stFdnConfig;
}TAF_CALL_FDN_INFO_STRU;


typedef struct
{
    VOS_UINT32                          ulLength;

    NAS_CC_IE_BC_OCTET3_STRU            Octet3;
    NAS_CC_IE_BC_OCTET3A_STRU           Octet3a;
    NAS_CC_IE_BC_OCTET3B_STRU           Octet3b;
    NAS_CC_IE_BC_OCTET3B_STRU           Octet3c;
    NAS_CC_IE_BC_OCTET3B_STRU           Octet3d;
    NAS_CC_IE_BC_OCTET3B_STRU           Octet3e;
    NAS_CC_IE_BC_OCTET4_STRU            Octet4;
    NAS_CC_IE_BC_OCTET5_STRU            Octet5;
    NAS_CC_IE_BC_OCTET5A_STRU           Octet5a;
    NAS_CC_IE_BC_OCTET5B_STRU           Octet5b;
    NAS_CC_IE_BC_OCTET6_STRU            Octet6;
    NAS_CC_IE_BC_OCTET6A_STRU           Octet6a;
    NAS_CC_IE_BC_OCTET6B_STRU           Octet6b;
    NAS_CC_IE_BC_OCTET6C_STRU           Octet6c;
    NAS_CC_IE_BC_OCTET6D_STRU           Octet6d;
    NAS_CC_IE_BC_OCTET6E_STRU           Octet6e;
    NAS_CC_IE_BC_OCTET6F_STRU           Octet6f;
    NAS_CC_IE_BC_OCTET6G_STRU           Octet6g;
    NAS_CC_IE_BC_OCTET7_STRU            Octet7;
}TAF_CALL_BC_STRU;


typedef struct
{
    TAF_CS_CAUSE_ENUM_UINT32            enCsCause;
    MN_CALL_CC_CAUSE_ENUM_U8            enCcCause;

} TAF_CS_ERR_CODE_MAP_STRU;

typedef struct
{
    APP_VC_OPEN_CHANNEL_FAIL_CAUSE_ENUM_UINT32     enVcCause;
    TAF_CS_CAUSE_ENUM_UINT32                       enTafCsCasue;
}VC_TO_TAFCS_CAUSE_STRU;

/*****************************************************************************
  4 宏定义
*****************************************************************************/


/*****************************************************************************
  5 全局变量声明
*****************************************************************************/


/*****************************************************************************
  6 接口函数声明
*****************************************************************************/
/*****************************************************************************
 函 数 名  : MN_CALL_Init
 功能描述  : 执行CCA模块的初始化，包括所有呼叫状态的复位和全局资源的初始化
             TAF应该在系统启动时和Reset时调用该接口
 输入参数  : 无
 输出参数  : 无
 返 回 值  : 无
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2007年9月20日
    作    者   : 丁庆 49431
    修改内容   : 新生成函数
*****************************************************************************/
VOS_VOID  MN_CALL_Init(MN_CALL_POWER_STATE_ENUM_U8 enPowerState);


/*****************************************************************************
 函 数 名  : MN_CALL_ProcAppReqMsg
 功能描述  : 处理来自应用层的请求消息
             该函数根据请求的类型将消息分发到相应的请求处理函数去处理
 输入参数  : pstMsg - 应用层调用TAF API时由API函数打包发出的消息
 输出参数  : 无
 返 回 值  : 无
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2007年9月20日
    作    者   : 丁庆 49431
    修改内容   : 新生成函数
*****************************************************************************/
VOS_VOID  MN_CALL_ProcAppReqMsg(
    const VOS_VOID                      *pstMsg
);


/*****************************************************************************
 函 数 名  : MN_CALL_ProcMnccPrimMsg
 功能描述  : 处理来自CC的MNCC原语消息
             该函数根据原语名将消息分发到相应的MNCC原语处理函数去处理
 输入参数  : pstMsg - 来自CC的MNCC原语消息
 输出参数  : 无
 返 回 值  : 无
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2007年9月20日
    作    者   : 丁庆 49431
    修改内容   : 新生成函数
*****************************************************************************/
VOS_VOID  MN_CALL_ProcMnccPrimMsg(
    const VOS_VOID                      *pMsg
);

/*****************************************************************************
 函 数 名  : MN_CALL_PowerOff
 功能描述  : 软关机时使用，用于清除call模块的所有状态机
 输入参数  : 无
 输出参数  : 无
 返 回 值  : 无
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2007年9月20日
    作    者   : 丁庆 49431
    修改内容   : 新生成函数
*****************************************************************************/
VOS_VOID  MN_CALL_PowerOff( VOS_VOID );


/*****************************************************************************
 函 数 名  : MN_CALL_ProcVCMsg
 功能描述  : 处理来自VC模块的消息
 输入参数  : pstMsg - 收到的消息
 返 回 值  : 无
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2008年1月10日
    作    者   : 丁庆 49431
    修改内容   : 新生成函数
*****************************************************************************/
VOS_VOID  MN_CALL_ProcVCMsg (VOS_VOID * pstMsg);


VOS_VOID MN_CALL_LineInfo(
    MNPH_USIM_STATUS_ENUM_U32           enUsimStatus
);

VOS_VOID MN_CALL_ProcOmMsg(
    VOS_VOID                            *pstMsg
);


VOS_VOID  MN_CALL_ProcCstCallPrimitive(
    const VOS_VOID                      *pMsg
);


VOS_VOID  MN_CALL_ProcRabmCallPrimitive(
    const VOS_VOID                      *pMsg
);


VOS_VOID MN_CALL_DispatchUsimMsg(struct MsgCB * pstMsg);



#if (VOS_WIN32 == VOS_OS_VER)

extern VOS_VOID MN_CALL_ProcUsimFdnInd(struct MsgCB * pstMsg);
#endif







VOS_VOID MN_CALL_SupportMoCallType(
    MN_CALL_TYPE_ENUM_U8                enCallType,
    VOS_BOOL                           *pSupported
);

#if (FEATURE_ON == FEATURE_PTM)
VOS_VOID MN_CALL_CsCallErrRecord(
    MN_CALL_ID_T                        ucCallId,
    TAF_CS_CAUSE_ENUM_UINT32            enCause
);


VOS_VOID MN_CALL_SndAcpuOmFaultErrLogInd(
    VOS_VOID                           *pData,
    VOS_UINT32                          ulDataLen
);
VOS_VOID MN_CALL_CsMtCallFailRecord(
    NAS_ERR_LOG_CS_MT_CALL_CAUSE_ENUM_U32   enCause
);

#endif

extern VOS_VOID MN_CALL_ReadNvimInfo(VOS_VOID);

TAF_CS_CAUSE_ENUM_UINT32 TAF_CALL_ConvertVcCauseToTafCsCause(
    APP_VC_OPEN_CHANNEL_FAIL_CAUSE_ENUM_UINT32      enCause
);

#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif /* MN_CALL_H */


