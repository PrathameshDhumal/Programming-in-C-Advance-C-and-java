/*
accept n  numbers from user and return the frequency of even nummbers

input : 4(1
2
3
4
)

output: 2 
*/
#include<stdio.h>
#include<stdlib.h>
#define ERRMEMORY -1
#define ERRSIZE -2
			//int *arr,int iSize
int CountEven(int arr[],int iSize)
{
	int iCnt=0;
	int iEven=0;
	
	if(arr==NULL)
	{
		return ERRMEMORY;
	}
	if(iSize<=0)
	{
		return ERRSIZE;
	}
	
for(iCnt=0;iCnt<iSize;iCnt++)
{
	if((arr[iCnt]%2)==0)
	{
		iEven++;
	}
}
return iEven;
}

int main()
{
int iValue=0;
int iRet=0;	
int iCnt=0;
int *ptr=NULL;
	
	printf("enter the n number");
	scanf("%d",&iValue);
	
	ptr=(int *)malloc(sizeof(int)*iValue);	//size off operator
	if(ptr==NULL)
	{
		printf("error:allocate mem");
		return -1;
	}
	printf("enter the values\n");
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=CountEven(ptr ,iValue);
if(iRet==ERRSIZE)
	{
		printf("Error:invalid size\n");
	}
	else if(iRet==ERRMEMORY)
	{
		printf("Error : invalid memory\n");
	}
	else
	{
printf("Number of even numbers are:%d",iRet);
	}
	
	free(ptr);
	return 0;
}
