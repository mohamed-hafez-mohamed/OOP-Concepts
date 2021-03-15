/****************************************************************************
* Title                 :   RECTANGLE   
* Filename              :   RECTANGLE_interface.h
* Author                :   Mohamed Hafez
* Origin Date           :   10/01/2021
* Version               :   1.0.0
* Compiler              :   TODO: COMPILER GOES HERE
* Target                :   TODO: MCU GOES HERE
* Notes                 :   None
*
*****************************************************************************/
/****************************************************************************
* Doxygen C Template 
*
*****************************************************************************/
/*************** INTERFACE CHANGE LIST **************************************
*
*    Date    Version   Author          Description 
*  10/01/21   1.0.0   Mohamed Hafez   Interface Created.
*
*****************************************************************************/
/** @file  RECTANGLE_interface.h
 *  @brief This module TODO: WHAT DO I DO?
 * 
 *  This is the header file for the definition TODO: MORE ABOUT ME!
 */
//TODO: UPDATE MACRO BELOW
#ifndef RECTANGLE_INTERFACE_H_
#define RECTANGLE_INTERFACE_H_

/******************************************************************************
* Includes
*******************************************************************************/
#include "SHAPE_interface.h"
/******************************************************************************
* Preprocessor Constants
*******************************************************************************/

/******************************************************************************
* Configuration Constants
*******************************************************************************/

/******************************************************************************
* Macros
*******************************************************************************/
	
/******************************************************************************
* Typedefs
*******************************************************************************/
typedef struct _rectangle
{
   Shape_t  Rectangle_Shape;
   u16      Rectangle_Length;
   u16      Rectangle_Width;
}Rectangle_t;
/******************************************************************************
* Variables
*******************************************************************************/

/******************************************************************************
* Function Prototypes
*******************************************************************************/
void RECTANGLE_voidConstructor(Rectangle_t * const Copy_PtrRectangle, u16 Copy_u16XPosition, u16 Copy_u16YPosition,
                       u16 Copy_u16length, u16 Copy_u16Width);

void RECTANGLE_voidDrawShape(Rectangle_t * const Copy_PtrRectangle);
u32  RECTANGLE_u32CalculateArea(Rectangle_t * const Copy_PtrRectangle);

#endif /*File_H_*/

/*** End of File **************************************************************/
