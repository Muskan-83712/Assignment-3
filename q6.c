//Write a program to accept a number and print all factors excluding the number

#include<stdio.h>
int main()
{
	int i=1, num ;

	printf("Enter the number: \n");
	scanf("%d",&num);

    printf("The factors of %d are ",num); 
	while(i<num)
	{
		if (num % i == 0)
		printf("%-4d",i);
		
		++i;
     
	}
   

return 0;
}
