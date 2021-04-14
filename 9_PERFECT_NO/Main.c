/*
Problem statement :
 Accept number from user and check whether the no. is perfect or not
 
 Input : 6         Output :   1  +  2  + 3  =	6
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
	     
	    		 if the ans is same as no 
				 	then no is perfect no 
	    		 otherwise 
	    		 	no is not a perfect no. 
	     
	     
    END
*/

#include "Header.h"

int main()          // Entry point function
{
    int iValue = 0;
    BOOLEAN bRet = 0;
    
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
   bRet = CheckPerfect(iValue);      // Function call    Dukanat ja	
   if(bRet==TRUE)
   	{
   		printf("It is perfect no.\n");
   	
	   }
	else
	{
		prinf("It is not perfect no.\n");
	}
	
   
    printf("Addition of factors is:%d",iRet);
    
    return 0;
}















