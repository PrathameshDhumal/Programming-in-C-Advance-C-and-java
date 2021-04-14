#include<stdio.h>       // REquired for printf and scanf


int SumOfFactor(int iNo)
{ 
int iSum = 0;			//used to store the add of the factors
int iCnt = 0;			//used for loop counter

//filter
if(iNo==0)				//if the input is 0
{
	return 0;
}

//input updater
if(iNo< 0)				//if input is negative
{
	iNo = -iNo;			//convert the negative no. to positive
}

//   	1		2		3
for(iCnt=1;iCnt<=iNo/2;iCnt++)
{
		
		//4
if((iNo % iCnt)== 0 )
	{
    printf("factors are %d\n",iCnt);
	iSum =	iSum + iCnt;
   
    }
}
return iSum;
}

int main()          // Entry point function
{
    int iValue = 0;
    int iRet = 0;
    
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
   iRet = SumOfFactor(iValue);      // Function call    Dukanat ja	
    printf("Addition of factors is:%d",iRet);
    return 0;
}


