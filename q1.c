/*Write a program to accept a character and a number, and print the character number times
Input:Character: *
Number: 6
Output:****** */

#include<stdio.h>
int main()
{
	int i=1, num;
	char ch;

	printf("Enter any character and number \n");
	scanf("%c %d",&ch,&num);

	while ( i<=num )
	{
      	printf("%c",ch);
		i++ ;
	}


return 0;
}
