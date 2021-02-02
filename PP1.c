//PP1: Write a program to input a  number and check it to be even or odd using if statement.
#include<stdio.h>
main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("%d is even number",n);
	}
	else
	 {
		printf("%d is odd number",n);
	}
}
