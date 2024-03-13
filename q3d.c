#include<stdio.h>
int main()
{
	int num,rem=1,arm=0;

	printf("Enter the three digit number:\n");
	scanf("%d",&num);
	
	int temp = num;
	
	while(num != 0)
	{

		rem = num % 10;
		arm = arm + (rem *rem *rem);
		num = num/10;
	}
	if (arm == temp)
		printf("Armstrong :%d == %d\n",temp,arm);
	else
		printf("Not armstrong\n");

	return 0;
}
