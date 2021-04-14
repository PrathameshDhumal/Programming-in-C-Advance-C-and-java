#include "Header.h"

////////////////////////////////////////////////////////////////
//Function name: DisplayFactor
//Input: Integer
//Output: Integer
//Description: It is used to display factor
//Author: Prathamesh dhumal
//Date: 28 july 2020
////////////////////////////////////////////////////////////////

Void DisplayFactor(int iNo)				//12
{
	int iCnt=0;							//0
	
	
	
	for( iCnt=1 ; iCnt<iNo ; iCnt++)
	   {
	   	
	if((iNo % iCnt )== 0)
	   {
	   	printf("%d",iCnt);
	   	
	   }
	   }
	
	
}
