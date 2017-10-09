/** 
 * File:   Lib_H_PIC_oscillators.h
 * Author: Isaev
 *
 * Created on 8 октября 2017 г., 17:00
 */

#ifndef LIB_H_PIC_OSCILLATORS_H
#define	LIB_H_PIC_OSCILLATORS_H

//******************************************************************************
// Секция include (подключаем заголовочные файлы используемых модулей)
#include <xc.h>
//******************************************************************************


//******************************************************************************
// Секция определения констант
//******************************************************************************


//******************************************************************************
// Секция определения типов
//******************************************************************************


//******************************************************************************
// Секция определения глобальных переменных
//******************************************************************************


//******************************************************************************
// Секция прототипов глобальных функций

//------------------------------------------------------------------------------
//  Прототипы функция для микроконтроллера серии "PIC24H"
#if defined (__PIC24H__)
extern void PIC_Init_Oscillator_HS_8MHz_FOSC_64MHz_FCY_32MIPS(void);
#endif
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
//  Прототипы функция для микроконтроллера серии "PIC24E"
#if defined (__PIC24E_)

#endif
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
//  Прототипы функция для микроконтроллера серии  "dsPIC33E"
#if defined (__dsPIC33E__) 
#endif
//------------------------------------------------------------------------------
//******************************************************************************


//******************************************************************************
// Секция определения макросов
//******************************************************************************

#endif	/* LIB_H_PIC_OSCILLATORS_H */

////////////////////////////////////////////////////////////////////////////////
// END OF FILE
////////////////////////////////////////////////////////////////////////////////
