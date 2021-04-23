/*
 1.Write a program which accept string from user and convert it into
lower case.
Input : “Marvellous Multi OS”
Output : marvellous multi os 
 */
#include<stdio.h>
int StrlenX(char *str)
{
    int iCnt = 0;
	int i = 0;
    while(*str != '\0')
    {
        if(*str<=65&&*str>=97)
        {
        	i++;
        		*str++;
		}
	
    }
    return str;
}

int main()
{
    char arr[30];       // Static memory allocation of array
    int iRet = 0;
    
    printf("Enter the string\n");
    //scanf("%s",arr);             // Accept the input till user enters space
    scanf("%[^'\n']s",arr);     // Accept the input till user enters  enter key
    // Input : "Jay Ganesh"
    
    iRet = StrlenX(arr);           // StrlenX(100);
    
    printf("String length is %c\n",iRet);       // 10
    return 0;
}
