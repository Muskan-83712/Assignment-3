/*Write a program to accept a number and
a. Calculate sum of digits of intege*/


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

	return 0;
}
