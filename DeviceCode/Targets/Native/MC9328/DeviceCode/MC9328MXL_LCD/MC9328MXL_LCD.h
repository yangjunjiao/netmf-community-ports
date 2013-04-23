////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Microsoft Corporation.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "tinyhal.h"
#include "..\mc9328mxl.h"

//--//

#ifndef _DRIVERS_DISPLAY_MC9328_LCD_H_
#define _DRIVERS_DISPLAY_MC9328_LCD_H_ 1

//////////////////////////////////////////////////////////////////////////////

#define MC9328_LCD_TIME_POWER_STABLE       50000
#define MC9328_LCD_TIME_RESET_COMPLETE     5000

//////////////////////////////////////////////////////////////////////////////

struct MC9328MXL_LCD_Driver
{
    static const UINT32 c_Screen_Buffer     = 0x09800000;

    //--//
    
    static BOOL Initialize(DISPLAY_CONTROLLER_CONFIG& config);

    static BOOL Uninitialize();

    static BOOL Enable( BOOL fEnable );

    //--//

    static UINT32* GetScreenBuffer() { return (UINT32*)c_Screen_Buffer; }

};

#endif  // _DRIVERS_DISPLAY_MC9328_LCD_H_
