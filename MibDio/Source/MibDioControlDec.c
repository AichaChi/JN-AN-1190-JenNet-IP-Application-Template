/****************************************************************************/
/*
 * MODULE              JN-AN-1162 JenNet-IP Smart Home
 *
 * DESCRIPTION         DioControl MIB Declaration
 */
/****************************************************************************/
/*
 * This software is owned by NXP B.V. and/or its supplier and is protected
 * under applicable copyright laws. All rights are reserved. We grant You,
 * and any third parties, a license to use this software solely and
 * exclusively on NXP products [NXP Microcontrollers such as JN5168, JN5164].
 * You, and any third parties must reproduce the copyright and warranty notice
 * and any other legend of ownership on each copy or partial copy of the
 * software.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Copyright NXP B.V. 2014. All rights reserved
 */
/****************************************************************************/

/****************************************************************************/
/***        Macro Definitions                                             ***/
/****************************************************************************/

/****************************************************************************/
/***        Include files                                                 ***/
/****************************************************************************/
/* SDK includes */
#include <jendefs.h>
/* Stack includes */
#include <JIP.h>
#include <AccessFunctions.h>
/* Application common includes */
#include "MibDio.h"
#include "MibDioControl.h"

/****************************************************************************/
/***        MIB structure                                                 ***/
/****************************************************************************/
PUBLIC tsMibDioControl sMibDioControl;

/****************************************************************************/
/***        MIB declaration                                               ***/
/****************************************************************************/
/* Registering MIB ? */
#if MK_REG_MIB_DIO_CONTROL

#define DECLARE_MIB
#include "MibDioControlDef.h"
JIP_START_DECLARE_MIB(DioControlDef, DioControl)
JIP_CALLBACK(Output,           MibDioControl_eSetOutput,           vGetUint32, &sMibDioControl.sPerm.u32Output          )
JIP_CALLBACK(OutputOn,   	   MibDioControl_eSetOutputOn,   	   vGetUint32, &sMibDioControl.sTemp.u32OutputOn   	  )
JIP_CALLBACK(OutputOff,        MibDioControl_eSetOutputOff,        vGetUint32, &sMibDioControl.sTemp.u32OutputOff       )
JIP_END_DECLARE_MIB(DioControl, hDioControl)

/* Public MIB handle */
PUBLIC const thJIP_Mib hMibDioControl = &sDioControlMib.sMib;

#else

/* Public MIB handle */
PUBLIC const thJIP_Mib hMibDioControl = NULL;

#endif

/****************************************************************************/
/***        END OF FILE                                                   ***/
/****************************************************************************/
