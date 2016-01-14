#ifndef _CB_MAIN_H_
#define _CB_MAIN_H_

/*---------------------------------------------------------------------------
 * Copyright (c) 2015 u-blox AB, Sweden.
 * Any reproduction without written permission is prohibited by law.
 *
 * Component   : Application
 * File        : cb_app.h
 *
 * Description : 
 *-------------------------------------------------------------------------*/

#if defined(__cplusplus)
extern "C" {
#endif

/*===========================================================================
 * DEFINES
 *=========================================================================*/

/*===========================================================================
 * TYPES
 *=========================================================================*/
/*---------------------------------------------------------------------------
* Callback to indicate that initialization of the stack is completed.
*-------------------------------------------------------------------------*/
typedef void(*cbMain_InitComplete)(void);

/*===========================================================================
 * FUNCTIONS
 *=========================================================================*/
extern void cbMAIN_init_bt(cbMain_InitComplete initCompleteCallback);

#if defined(__cplusplus)
}
#endif

#endif /*_CB_MAIN_H_*/
