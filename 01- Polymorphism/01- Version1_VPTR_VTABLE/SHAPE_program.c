/*******************************************************************************
* Title                 :   Shape
* Filename              :   Shape_program.c
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
/** @file Shape_program.c
 *  @brief This is the source file for TODO: WHAT DO I DO?
 */
/******************************************************************************
* Includes
*******************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "SHAPE_interface.h"
#include "SHAPE_config.h"
#include "SHAPE_private.h"

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
void SHAPE_voidConstructor(Shape_t * const Copy_PtrShape, u16 Copy_u16XPosition, u16 Copy_u16YPosition)
{
   // Create and Initialize VTable In Rom
   static const ShapeVtable_t Static_Vtable =
   {
      &SHAPE_voidDrawShape,
      &SHAPE_u32CalculateArea
   };
   Copy_PtrShape->Shape_Vptr      = &Static_Vtable;
   Copy_PtrShape->Shape_XPosition = Copy_u16XPosition;
   Copy_PtrShape->Shape_YPosition = Copy_u16YPosition;
}

void SHAPE_MoveBy(Shape_t * const Copy_PtrShape, u16 Copy_u16dxPosition, u16 Copy_u16dyPosition)
{
   Copy_PtrShape->Shape_XPosition += Copy_u16dxPosition;
   Copy_PtrShape->Shape_YPosition += Copy_u16dyPosition;
}

// For All Shapes Using Polymorphism Concept
void SHAPE_voidDrawShapes(Shape_t const * Copy_ArrayOfPtsToShape[])
{
   u8 Local_u8ObjectsCounter;
   for(Local_u8ObjectsCounter = 0;Copy_ArrayOfPtsToShape[Local_u8ObjectsCounter] != (Shape_t *)0;Local_u8ObjectsCounter++)
   {
      SHAPE_DRAW_VCALL(Copy_ArrayOfPtsToShape[Local_u8ObjectsCounter]);
   }
}

// to initialize vtable
static void SHAPE_voidDrawShape(Shape_t const * const Copy_PtrShape)
{
   (void)Copy_PtrShape;
}

static u32  SHAPE_u32CalculateArea(Shape_t const * const Copy_PtrShape)
{
   (void)Copy_PtrShape;
   return 0;
}




/*************** END OF FUNCTIONS ***************************************************************************/
