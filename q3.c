/*Write a program to accept a number and
a. Calculate sum of digits of integer
b. Reverse the number
c. Check whether given number is numeric palindrome or not
d. Check whether it is Armstrong no. (when sum of cube of all digits of equals the number
then the number is called as Armstrong numbe)*/

#include<stdio.h>

int main()
{
 
	int num ,sum=0,arm, rem=1 ,rev=0;
	int temp = num;

	printf("Enter the number:\n");
	scanf("%d",&num);
 	
	while(num != 0)
		{
			rem = num % 10;
			sum = sum +rem;
			num = num/10;

			
		}printf("the sum of the digits = %d\n",sum);

	
	while(num != 0)
		{
			rem = num % 10;
			rev = rev * 10 + rem;
			num = num/10;

			
		}printf("reverse number = %d\n",rev);


	while(num != 0)
		{
			rem = num % 10;
			rev = rev *10 +rem;
			num = num/10;

	         }	if (temp == rev)
			printf("%d is a palindrome number\n",temp);
			else 
			printf("%d is not a palindrome number\n",temp);
	
	
	while(temp != 0)
		{
			rem = temp % 10;
			arm = arm + (rem * rem * rem );
			temp /= 10;
		 }
		 if(arm == num)
	     printf("Armstrong : %d == %d \n",num,arm);
		 else
	 	printf("Not Armstrong \n");
					 

return 0;
}

