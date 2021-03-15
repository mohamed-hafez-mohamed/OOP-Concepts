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
   Copy_PtrShape->Shape_XPosition    = Copy_u16XPosition;
   Copy_PtrShape->Shape_YPosition    = Copy_u16YPosition;
}

void SHAPE_MoveBy(Shape_t * const Copy_PtrShape, u16 Copy_u16dxPosition, u16 Copy_u16dyPosition)
{
   Copy_PtrShape->Shape_XPosition += Copy_u16dxPosition;
   Copy_PtrShape->Shape_YPosition += Copy_u16dyPosition;
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

// virtual call mechansim using first approach
/*
// Virtual Calls (Late Binding)
void SHAPE_Draw_Vcall(Shape_t const * const Copy_PtrShape)
{
   (*Copy_PtrShape->Shape_Vptr->DrawShape)(Copy_PtrShape);
}

u32  SHAPE_Area_Vcall(Shape_t const * const Copy_PtrShape)
{
   u32 Local_ShapeArea = 0;
   Local_ShapeArea = (*Copy_PtrShape->Shape_Vptr->CalculateShapeArea)(Copy_PtrShape);
   return Local_ShapeArea;
}
*/


/*************** END OF FUNCTIONS ***************************************************************************/
