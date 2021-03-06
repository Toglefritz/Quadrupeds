//=============================================================================
//Project Lynxmotion Phoenix
//Description: Phoenix software
//Software version: V2.0
//Date: 29-10-2009
//Programmer: Jeroen Janssen [aka Xan]
//         Kurt Eckhardt(KurtE) converted to C and Arduino
//   Kåre Halvorsen aka Zenta - Makes everything work correctly!     
//
// This version of the Phoenix code was ported over to the Arduino Environement
// and is specifically configured for the Lynxmotion BotBoarduino 
//
//=============================================================================
//
//KNOWN BUGS:
//    - Lots ;)
//NOTES:
// - Requires the Borboarduino and the SSC-32.
// - See Hex_CFG.h to onfigure options and see what pins are used.
// - Install all the provided libraires (those specific versions are required)
// - Update the SSC-32 firmware to its latest version. You can find it at: 
//     http://www.lynxmotion.com/p-395-ssc-32-servo-controller.aspx
//=============================================================================
// Header Files
//=============================================================================

#define DEFINE_HEX_GLOBALS
#if ARDUINO>99
#include <Arduino.h>
#else
#endif
#include <Wire.h>
#include <EEPROM.h>
#include <PS2X_lib.h>

#include <SoftwareSerial.h>
#include "Hex_CFG.h"
#include <Phoenix.h>
#include <Phoenix_Input_PS2.h>
#include <Phoenix_Driver_SSC32.h>
#include <Phoenix_Code.h>

