//Write a program to print table of given number.


#include<stdio.h>
int main()
{

	int i=1,num,res;
	printf("Enter the number to print its table\n");
	scanf("%d",&num);

	while(i<=10)
		{

			res = num * i;
			printf("%d * %d = %d\n",num, i, res);
			i++;
			
		}

return 0;
}
