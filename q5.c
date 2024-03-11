//Write a program to find factorial of given number.

#include<stdio.h>
int main()
{
	int num,fact,i;
	fact = 1;
	i=1;
	
	printf("Enter a number to find factorial\n:");
	scanf("%d",&num);

    while(i <= num)
		{
			fact = fact*i;
			i++;

		}printf("THe factorial of %d is: %d\n", num,fact);



return 0;
}
