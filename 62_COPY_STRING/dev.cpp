/*
    Problem statement : Accept string from user and copy the contents of that sting in
    another string
 implement strcpy
 
 */

#include<stdio.h>

void StrcpyX(char *Src,char *Dest) 	//arr=Src   brr=Dest
	{
	
	if(
	  (Src==NULL)|| 
	  (
	  Dest==NULL)
	  )
	{
		return;
		}	
while(*Src!='\0')
{
	*Dest = *Src;
	Src++;
	Dest++;
}
*Dest='\0';	
}
int main()
{
    char arr[30]={'\0'}; 
    char brr[30]={'\0'};  
    printf("Please enter the string\n");
    scanf("%[^'\n']s",arr);
        
    StrcpyX(arr,brr);
    
    printf("copied string is %s\n",brr);
    
    return 0;
}






























