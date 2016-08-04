

#ifndef __TTFLINKINTERFACE_H__
#define __TTFLINKINTERFACE_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "product_config.h"


#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/
/* V9R1性能提升，TTF代码段放入400K SRAM控制宏 */
#if (FEATURE_ON == FEATURE_SRAM_400K)

#ifndef WTTF_SRAM_400K
#define WTTF_SECTION(szSecName)         __attribute__((section(szSecName)))
#define WTTF_SRAM_400K                  WTTF_SECTION(".text_wttf_t_01")
#endif

#else
#define WTTF_SRAM_400K
#endif


/*****************************************************************************
  3 枚举定义
*****************************************************************************/


/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/
typedef struct _TTF_NODE_ST
{
    struct _TTF_NODE_ST    *pNext;
    struct _TTF_NODE_ST    *pPrev;
} TTF_NODE_ST;

/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/


#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of TtfDrvInterface.h */

