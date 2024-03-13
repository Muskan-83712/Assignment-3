//Write a program to accept integer values of base and index and calculate power of base to index\


#include<stdio.h>
int main()
{
	int base,index;
	printf("Enter base and index: ");
	scanf("%d%d",&base,&index);
	
	int pow = 1;
	for (int i=1 ; i<=index ;i++)
	{
		pow *= base;
	}
	
	printf("%d ^ %d = %d\n",base,index,pow);

	return 0;
}
