//ONLY ONE FUNCTION IS USED IN THIS PROGRAM



//HEADER FILE
#include<stdio.h>       // REquired for printf and scanf
typedef int BOOLEAN;

#define TRUE 1
#define FALSE 0
//int SumOfFactor(int);
BOOLEAN CheckPerfect(int);



//////////////////////////////////////////////////////////////
//
//  Function name : CheckPerfect
//  Input : Interger
//  Output :    BOOLEAN
//  Description :   It is used to check wheteher no. is perfect or not.
//  Autor : prathamesh Dhumal
//  Date :  30th July 2020
//
//////////////////////////////////////////////////////////////

BOOLEAN CheckPerfect (int iNo)
{

	int iCnt =0;
	int iSum = 1;
	//updater
	if(iNo<0)		//positive no. to negative
	{
		iNo = -iNo;
	}
	//filter
	if((iNo==1 )|| (iNo==0))	//1 and 0 are not perfect 
{
	return FALSE;
	}

	

	
for(iCnt=1;iCnt<=iNo/2;iCnt++)
{
		
		//4

	{
    iSum =	iSum + iCnt;
    }
}
return iSum;


//dukanat dry clean karna baher na deta
	for(iCnt=1;iCnt<=iNo/2;iCnt++)
{
		
		//4
if((iNo % iCnt)== 0 )
	{
    iSum =	iSum + iCnt;
    }
}
return iSum;

	if(iSum==iNo)
	{
		return TRUE;
	
	}
	else
	{
		return FALSE;
	}
}


//MAIN FILE
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
		printf("It is not perfect no.\n");
	}
	
   
    
    return 0;
}































