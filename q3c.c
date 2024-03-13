//Write a program to accept a number and Check whether given number is numeric palindrome or not

#include<stdio.h>

int main()
{

	int num ,sum=0,rem=1 ,rev=0;


	printf("Enter the number:\n");
	scanf("%d",&num);

	int temp = num;

	while(num != 0)
	{
		rem = num % 10;
		rev = rev *10 +rem;
		num = num/10;

	}
	if (rev == temp)
		printf("%d is a palindrome number\n",rev);
	else
		printf("%d is not a palindrome number\n",rev);

	return 0;
}
