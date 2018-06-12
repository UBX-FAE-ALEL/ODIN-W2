/*---------------------------------------------------------------------------
 * Copyright (c) 2016 u-blox AB, Sweden.
 * Any reproduction without written permission is prohibited by law.
 *
 * Component   : RTSL
 * File        : cb_status.h
 *
 * Description : Common RTSL status codes 
 *-------------------------------------------------------------------------*/
#ifndef _CB_STATUS_H_
#define _CB_STATUS_H_

/*===========================================================================
 * DEFINES
 *=========================================================================*/

#define OK(status) (status == cbSTATUS_OK)
#define BUSY(status) (status == cbSTATUS_BUSY)
#define ERR(status) (status == cbSTATUS_ERROR)

/*===========================================================================
 * TYPES
 *=========================================================================*/

 typedef enum
 {
    cbSTATUS_OK,
    cbSTATUS_ERROR,
    cbSTATUS_BUSY,
    cbSTATUS_RECEIVE_DATA_MODE,
    cbSTATUS_TIMEOUT
 
 } cbRTSL_Status;

#endif /* _CB_STATUS_H_ */

