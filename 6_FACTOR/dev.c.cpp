


#include<stdio.h>


void DisplayFactor(int iNo)				//12
{
	int iCnt=0;							//0
	
	
	
	for( iCnt=1 ; iCnt<iNo ; iCnt++)
	   {
	   	
	if((iNo % iCnt )== 0)
	   {
	   	printf("%d\n",iCnt);
	   	
	   }
	   }
	
	
}

int main()			// entry point function
{
	int iValue=0;
	
	
	printf("enter number\n");
	scanf("%d",&iValue);
	
	DisplayFactor(iValue);
	
	
	return 0;
	}
