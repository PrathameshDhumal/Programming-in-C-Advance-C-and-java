/*
probtlem statement: array program 1
accept n number and display the addition of those no.

input:
value of n =5(5 3 7 1 2)
number are=18


input=4(5 -3 7 1)
output=10
*/

#include<stdio.h>
#include<stdlib.h>

int SumNNumbers(int arr[],int iSize)
{
	int iSum=0;
	int iCnt=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		iSum=iSum+arr[iCnt];
		
	}
	return iSum;
}

int main()
{
//	int iArr[20];	static memory
	int iValue=0;
	int iSum=0;
	int iCnt=0;
	int iRet=0;
	int *ptr=NULL;	//use of pointer
	printf("Enter value of N");
	scanf("%d",&iValue);
	
ptr =(int *)malloc(4*iValue);	//(typecasting int *)

printf("enter the values of arrany\n");

	for(iCnt=0;iCnt<iValue;iCnt++)
{
	scanf("%d",&ptr[iCnt]);
}

iRet=SumNNumbers(ptr,iValue);
	printf("ADDITION IS:%d\n",iRet);
	return 0;

}
