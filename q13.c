//Write a program to display n terms of Fibonacci series

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of terms: ");
	scanf("%d",&n);

	
	int t1 =0 , t2=1, nextTerm;
	for (int i=1 ; i<=n ; ++i)
		{

		printf("%d, ",nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;

		}


	return 0;
}

