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
#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "RECTANGLE_interface.h"
#include "CIRCLE_interface.h"
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

int main(void)
{
   u16             Local_u16RectangleArea = 0;
   u16             Local_u16CircleArea    = 0;
   Rectangle_t     Local_RectangleObject;
   Circle_t        Local_CircleObject;
   Shape_t const * Rom_ShapeObjects[] =
   {
      (Shape_t *)&Local_RectangleObject, (Shape_t *)&Local_CircleObject, (Shape_t *)0
   };

   RECTANGLE_voidConstructor(&Local_RectangleObject, 6, 9, 5, 3);
   CIRCLE_voidConstructor(&Local_CircleObject, 1, 2, 5);
   printf("Rectangle x    = %d,\t", Local_RectangleObject.Rectangle_Shape.Shape_XPosition);
   printf("Rectangle y    = %d\n",  Local_RectangleObject.Rectangle_Shape.Shape_YPosition);
   printf("Rectangle l    = %d,\t", Local_RectangleObject.Rectangle_Length);
   printf("Rectangle w    = %d\n",  Local_RectangleObject.Rectangle_Width);

   printf("Circle    x    = %d,\t", Local_CircleObject.Circle_Shape.Shape_XPosition);
   printf("Circle    y    = %d\n",  Local_CircleObject.Circle_Shape.Shape_YPosition);
   printf("Circle    r    = %d\n",  Local_CircleObject.Circle_Raduis);

   Local_u16RectangleArea = Local_RectangleObject.Rectangle_Shape.CalculateShapeArea((Shape_t *)&Local_RectangleObject);
   printf("Rectangle Area = %d\n",  Local_u16RectangleArea);
   Local_u16CircleArea    = Local_CircleObject.Circle_Shape.CalculateShapeArea((Shape_t *)&Local_CircleObject);
   printf("Circle    Area = %d\n",  Local_u16CircleArea);
   return 0;
}

/*************** END OF FUNCTIONS ***************************************************************************/
