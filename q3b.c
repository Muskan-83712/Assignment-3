//Write a program to accept a number and Reverse the number

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
		rev = rev * 10 + rem;
		num = num/10;


	}printf("reverse number = %d\n",rev);

return 0;
}
