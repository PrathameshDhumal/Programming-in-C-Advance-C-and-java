#include "Header.h"

//////////////////////////////////////////////////////////////
//
//  Function name : SumOfFactor
//  Input : Interger
//  Output :    Integer
//  Description :   It is used to perform addition of the factors
//  Autor : prathamesh Dhumal
//  Date :  29th July 2020
//
//////////////////////////////////////////////////////////////

int SumOfFactor(int iNo)         
{ 
int iSum = 0;			//used to store the add of the factors
int iCnt = 0;			//used for loop counter
///		1		2		3
for(iCnt=1;iCnt<=iNo/2;iCnt++)
{
		
		//4
if((iNo % iCnt)== 0 )
	{
    iSum =	iSum + iCnt;
    }
}
return iSum;
}



//////////////////////////////////////////////////////////////
//
//  Function name : CheckPerfect
//  Input : Interger
//  Output :    BOOLEAN
//  Description :   It is used to check wheteher no. is perfect or not.
//  Autor : prathamesh Dhumal
//  Date :  30th July 2020
//
//////////////////////////////////////////////////////////////

BOOLEAN CheckPerfect (int iNo)
{
	int iRet = 0;
	iRet= SumOfFactors(iNo);
	
	if(iRet==iNo)
	{
		return TRUE;
	
	}
	else
	{
		return FALSE;
	}
}




















