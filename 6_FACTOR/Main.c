/* 
problem statement : accept number from one user and display factors of that number.

input :12 output :1 2 3 4 6 
*/

/*

algo:

START

accept no. from user and store in variable no.

create one counter and initialize to 1

iterate till the counter is less than thee number i.e no

  check whetehr th ecounter diides the no completely
    if yes 
      then display the counter 
   incrememnt the value of counter by one
   
   continue to the iteration
END 
*/

#inclue "Header.h"
int main()			// entry point function
{
	int iValue=0;
	
	
	printf("enter number\n");
	scanf("%d",&iValue);
	
	DisplayFactor(iValue);
	
	
	return 0;
}
