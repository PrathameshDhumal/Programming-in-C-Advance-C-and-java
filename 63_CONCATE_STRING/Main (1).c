/*
    Problem statement :
 Accept 2 strings from user and concate the contens of first string at the end second string.
 
 */

#include<stdio.h>

void StrcatX(char *Src, char *Dest)
{
    if(
       (Src == NULL) ||     
       (Dest == NULL)      
       )
    {
        return;
    }
    
    
    while(*Dest != '\0')    
    {
        Dest++;               
    }
    
   while(*Src != '\0')
   {
       *Dest = *Src;
       Src++;
       Dest++;
   }
    
    *Dest = '\0';
}

int main()
{
    char arr[30] = {'\0'};   
    char brr[30] = {'\0'};   
    
    printf("Please enter first string\n");
    scanf("%[^'\n']s",arr);
    
    printf("Please enter second string\n");
    scanf(" %[^'\n']s",brr);
        
    StrcatX(arr,brr);      
    
    printf("String after concatination %s\n",brr);
    
    return 0;
}






























