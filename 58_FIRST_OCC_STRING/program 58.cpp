/*4. Write a program which accept string from user and display only
digits from that string.
Input : “marve89llous121”
Output : 89121
Input : “Demo”
Output : */
#include<stdio.h>
int SearchFirstOcc(char  str[],char ch )
{
	int i=0;//index
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
			break;
		}
		i++;
	}
	if(str[i]==ch)
	{
		return i;
	}
	else 
	{
		return -1;
	}
}
int SearchFirstOccX(char  *str,char ch )
{
	
}
#include<stdio.h>

int main()
{
	char cValue='\0';
	int iRet=0;
char arr[30];
 
 printf("Enter string\n");
 scanf("%[^'\n']s",arr);
 
printf("enter character\n");
scanf("%c",&cValue);

iRet=SearchFirstOcc(arr,cValue);
  
if(iRet==-1)
{
	printf("There is no such character\n");
}
else
{
printf("First Occurance of character at : %d\n",iRet);
}
 return 0;
} 
