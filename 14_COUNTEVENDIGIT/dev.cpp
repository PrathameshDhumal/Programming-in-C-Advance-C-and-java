
#include<stdio.h>       // REquired for printf and scanf

int CountEvenDigits(int);
#include "Header.h"

//////////////////////////////////////////////////////////////
//
//  Function name : CountEvenDigits
//  Input : Interger
//  Output :    Integer
//  Description :   It is used to count number of even digits
//  Autor : Piyush Manohar Khairnar
//  Date :  3rd August 2020
//
//////////////////////////////////////////////////////////////

int CountEvenDigits(int iNo)                //      2547      254   25      2   0
{
    int iCnt = 0;                           //  0   1   2
    int iDigit = 0;                          //     7   4   5     2
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if((iDigit % 2) == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    
    return iCnt;
}









/*
Problem statement :
Accept number from user and return the number of even digits from that numvber.

 Input : 1278   Output : 2
 Input : 127    Output : 1
 Input : 27   Output : 1
 Input : 2   Output : 1
 Input : -56    Output : 1
 Input : 0      Output : 1
 Input : 1005   Output : 2
 */

/*
    Algorithm:
 
    START
        Accept one number as no
        Create one counter as cnt and initialise to 0
 
        Iterate till the no is not equal to 0
            Perform the mod operation to seperate out the digit
            if the digit is even then
                increament the counter by 1
            divide the no by 10 and store the result in no itself
        Continue
 
        return the value of counter
    END
 
 */

#include "Header.h"

// Entry point function
int main()
{
    int iValue = 0;             
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = CountEvenDigits(iValue);
    
    printf("Number of even digits are : %d\n",iRet);
    
    return 0;       // Sucess to OS
}














/*
Input : 1547

1547 / 10   ->      154         1
154 / 10    ->       15           2
15 / 10      ->        1            3
1 / 10          ->      0            4
*/
