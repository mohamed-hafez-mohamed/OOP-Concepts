/*******************************************************************************
* Title                 :   RECTANGLE 
* Filename              :   RECTANGLE_program.c
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
/** @file RECTANGLE_program.c
 *  @brief This is the source file for TODO: WHAT DO I DO? 
 */
/******************************************************************************
* Includes
*******************************************************************************/	

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "RECTANGLE_interface.h"
#include "RECTANGLE_config.h"
#include "RECTANGLE_private.h"

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
void RECTANGLE_voidConstructor(Rectangle_t * const Copy_PtrRectangle, u16 Copy_u16XPosition, u16 Copy_u16YPosition,
                               u16 Copy_u16length, u16 Copy_u16Width)
{
   // Create nd Initialize VTable In Rom
   static const ShapeVtable_t Static_Vtable =
   {
      (PtrFunc_VirFunc)(&RECTANGLE_voidDrawShape),
      (PtrFunc_VirFunc)(&RECTANGLE_u32CalculateArea)
   };
   // the shape constructor set vptr to point to shape vtable.
   SHAPE_voidConstructor(&Copy_PtrRectangle->Rectangle_Shape, Copy_u16XPosition, Copy_u16YPosition);
   // Assign the inherited vptr for the Rectangle class.
   // you override the setting by set vptr to point to rectangle vtable. 
   Copy_PtrRectangle->Rectangle_Shape.Shape_Vptr = &Static_Vtable;
   Copy_PtrRectangle->Rectangle_Length           =  Copy_u16length;
   Copy_PtrRectangle->Rectangle_Width            =  Copy_u16Width;
}

u32  RECTANGLE_u32CalculateArea(Rectangle_t * const Copy_PtrRectangle)
{
   return ((Copy_PtrRectangle->Rectangle_Length) * (Copy_PtrRectangle->Rectangle_Width));
}

void RECTANGLE_voidDrawShape(Rectangle_t * const Copy_PtrRectangle)
{

}

/*************** END OF FUNCTIONS ***************************************************************************/
