/****************************************************************************/
/*
 * MODULE              JN-AN-1162 JenNet-IP Smart Home
 *
 * DESCRIPTION         NwkSecurity MIB - Definition
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
#undef MIB_HEADER
#define MIB_HEADER "MibNwkSecurityDef.h"

/****************************************************************************/
/***        Include files                                                 ***/
/****************************************************************************/
/* Stack includes */
#include <jip_define_mib.h>
/* Application common includes */
#include "MibCommon.h"

/****************************************************************************/
/***        MIB definition                                                ***/
/****************************************************************************/
START_DEFINE_MIB(MIB_ID_NWK_SECURITY, NwkSecurityDef)
/*         ID 					   			   Type    Name  		  Disp  Flags Access         			Cache Security */
DEFINE_VAR(VAR_IX_NWK_SECURITY_KEY_NETWORK	 , BLOB,   KeyNetwork, 	  NULL, 0,    (READ | WRITE | TRAP),  NONE, NONE)
DEFINE_VAR(VAR_IX_NWK_SECURITY_KEY_GATEWAY	 , BLOB,   KeyGateway, 	  NULL, 0,    (READ | WRITE | TRAP),  NONE, NONE)
DEFINE_VAR(VAR_IX_NWK_SECURITY_KEY_STANDALONE, BLOB,   KeyStandalone, NULL, 0,    (READ | WRITE | TRAP),  NONE, NONE)
DEFINE_VAR(VAR_IX_NWK_SECURITY_CHANNEL       , UINT8,  Channel,       NULL, 0,    (READ         | TRAP),  NONE, NONE)
DEFINE_VAR(VAR_IX_NWK_SECURITY_PAN_ID        , UINT16, PanId,         NULL, 0,    (READ         | TRAP),  NONE, NONE)
DEFINE_VAR(VAR_IX_NWK_SECURITY_REJOIN        , UINT16, Rejoin,        NULL, 0,    (READ | WRITE | TRAP),  NONE, NONE)
END_DEFINE_MIB(NwkSecurityDef)

/****************************************************************************/
/***        END OF FILE                                                   ***/
/****************************************************************************/
