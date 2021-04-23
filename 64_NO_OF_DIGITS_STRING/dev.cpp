/*
    Problem statement : Accept string from user and display the 
    count of digits in that string
 implement strcpy
 input:prrr12
 output:2
 
 */

#include<stdio.h>

int DigitCount(char *str)
{
	int iCnt=0;
	if(str==NULL)
	{
		return -1;
	}
	while(*str!='\0')
	{
		if((*str>='0') && (*str<='9'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}
int main()
{
	int iRet=0;
    char arr[30]={'\0'}; 
    
    printf("Please enter the string\n");
    scanf("%[^'\n']s",arr);
        
   iRet=DigitCount(arr);
    
    printf("No. of digits are %d\n",iRet);
    
    return 0;
}






























