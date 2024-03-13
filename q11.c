//Write a program to find factorial of given number.

#include<stdio.h>
int main()
{
	int num,fact=1;
	printf("Enter the number:\n");
	scanf("%d",&num);



	printf("The factorial of %d! = ",num);
	for (int i=1 ; i<=num; i++)
	{
		fact = fact *i;
	}
	printf("%d\n",fact);


	return 0;
}
