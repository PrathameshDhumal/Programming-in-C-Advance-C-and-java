/*
Problem statement :
 Accept number from user and return the addtion of factors of that no.
 
 Input : 12         Output :   1  +  2  + 3  + 4 +6	=	16
*/

/*
    Algorith :
 
    START
            Accept number from user and store into the variable no
 
            Create one counter as cnt and initialise to 1
 			Create one variable to store the addition as ans
 			
            Iterate till the counter is less than the number/2 ie. no/2
                check whether the cnt divides the no completetly
                    if yes
                        then add the value of cnt into ans
                increment the value of counter by 1
 
       
	       continue to the iteration
	       return the value of ans
    END
*/

#include "Header.h"

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















