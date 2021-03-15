/*******************************************************************************
* Title                 :   CIRCLE 
* Filename              :   CIRCLE_program.c
* Author                :   Mohamed Hafez
* Origin Date           :   10/01/2021
* Version               :   1.0.0
* Compiler              :   TODO: COMPILER GOES HERE
* Target                :   TODO: MCU GOES HERE
* Notes                 :   None 
*
*****************************************************************************/
/*************** SOURCE REVISION LOG *****************************************
*
*    Date    Version   Author          Description 
*  10/01/21   1.0.0   Mohamed Hafez   Initial Release.
*
*******************************************************************************/
/** @file CIRCLE_program.c
 *  @brief This is the source file for TODO: WHAT DO I DO? 
 */
/******************************************************************************
* Includes
*******************************************************************************/	

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "CIRCLE_interface.h"
#include "CIRCLE_config.h"
#include "CIRCLE_private.h"

/******************************************************************************
* Module Preprocessor Constants
*******************************************************************************/

/******************************************************************************
* Module Preprocessor Macros
*******************************************************************************/

/******************************************************************************
* Module Typedefs
*******************************************************************************/

/******************************************************************************
* Module Variable Definitions
*******************************************************************************/

/******************************************************************************
* Function Prototypes
*******************************************************************************/

/******************************************************************************
* Function Definitions
*******************************************************************************/
void CIRCLE_voidConstructor(Circle_t * const Copy_PtrCircle, u16 Copy_u16XPosition, u16 Copy_u16YPosition,
                              u16 Copy_u16Raduis)
{
   // the shape constructor initialize function pointer with it's function.
   SHAPE_voidConstructor(&Copy_PtrCircle->Circle_Shape, Copy_u16XPosition, Copy_u16YPosition);
   // you override the setting by set initialize function pointer with the object functions. 
   Copy_PtrCircle->Circle_Shape.CalculateShapeArea = &CIRCLE_u32CalculateArea;
   Copy_PtrCircle->Circle_Shape.DrawShape          = &CIRCLE_voidDrawShape;
   Copy_PtrCircle->Circle_Raduis                   =  Copy_u16Raduis;
}

u32  CIRCLE_u32CalculateArea(Circle_t * const Copy_PtrCircle)
{
   return ((9) * (Copy_PtrCircle->Circle_Raduis));
}

void CIRCLE_voidDrawShape(Circle_t * const Copy_Circle)
{

}

/*************** END OF FUNCTIONS ***************************************************************************/
