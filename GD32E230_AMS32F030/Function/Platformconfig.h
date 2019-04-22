/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ���������������޹�˾

 ******************************************************************************
  �� �� ��   : AsmPlatformconfig.h
  �� �� ��   : ����
  ��    ��   : qing
  ��������   : 2019��4��20��
  ����޸�   :
  ��������   : AsmPlatformconfig.c ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2019��4��20��
    ��    ��   : qing
    �޸�����   : �����ļ�

******************************************************************************/
#include "stm32f0xx.h"
/*----------------------------------------------*
 * ����ͷ�ļ�                                   *
 *----------------------------------------------*/

/*----------------------------------------------*
 * �ⲿ����˵��                                 *
 *----------------------------------------------*/

/*----------------------------------------------*
 * �ⲿ����ԭ��˵��                             *
 *----------------------------------------------*/

/*----------------------------------------------*
 * �ڲ�����ԭ��˵��                             *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ȫ�ֱ���                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ģ�鼶����                                   *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ��������                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * �궨��                                       *
 *----------------------------------------------*/

#ifndef __ASMPLATFORMCONFIG_H__
#define __ASMPLATFORMCONFIG_H__


#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */

extern void Display(void);
extern void DisplayScan(void);
extern int fputc(int ch, FILE *f);
extern void Pwm_SaveConfig(uint32_t Freq, uint16_t Duty);
extern void System_Systick_Init(uint32_t ticks);
extern void System_WaterPump_Control(FunctionalState NewState);
extern uint16_t WaterPump_WorkStateDetect(void);
extern void System_WaterPump_Init(void);
extern void Usart_Debug_Init(uint32_t Baudrate);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */


#endif /* __ASMPLATFORMCONFIG_H__ */