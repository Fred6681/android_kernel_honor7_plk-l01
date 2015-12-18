/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : __DRV_RSE_H__
  版 本 号   : 初稿
  作    者   :
  生成日期   :
  最近修改   :
  功能描述   : __DRV_RSE_H__ 的头文件
  函数列表   :
  修改历史   :
  1.日    期   :
    作    者   :
    修改内容   : 创建文件

******************************************************************************/

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#ifndef __DRV_RSE_H__
#define __DRV_RSE_H__

extern int bsp_rse_on(void);
#define DRV_RSE_ON() bsp_rse_on()

extern int bsp_rse_off(void);
#define DRV_RSE_OFF() bsp_rse_off()

#endif
