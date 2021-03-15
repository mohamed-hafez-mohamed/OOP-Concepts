/****************************************************************************
* Title                 :   Shape
* Filename              :   Shape_interface.h
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
/** @file  Shape_interface.h
 *  @brief This module TODO: WHAT DO I DO?
 *
 *  This is the header file for the definition TODO: MORE ABOUT ME!
 */
//TODO: UPDATE MACRO BELOW
#ifndef Shape_INTERFACE_H_
#define Shape_INTERFACE_H_

/******************************************************************************
* Includes
*******************************************************************************/

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
typedef u32 (*PtrFunc_VirFunc)(struct _shape const * const Copy_PtrShape);

typedef struct _shape
{
   u16             Shape_XPosition;
   u16             Shape_YPosition;
   PtrFunc_VirFunc CalculateShapeArea;
   PtrFunc_VirFunc DrawShape;

}Shape_t;


/******************************************************************************
* Variables
*******************************************************************************/

/******************************************************************************
* Function Prototypes
*******************************************************************************/
/* Shapes' public Operations*/
void SHAPE_voidConstructor(Shape_t * const Copy_PtrShape, u16 Copy_u16XPosition,  u16 Copy_u16YPosition);
void SHAPE_voidMoveBy(Shape_t      * const Copy_PtrShape, u16 Copy_u16dxPosition, u16 Copy_u16dyPosition);
void SHAPE_voidDrawShapes(Shape_t const * Copy_ArrOfPtrShape[]);

#endif /*File_H_*/

/*** End of File **************************************************************/
