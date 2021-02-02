//PP3: Write a program to input a number and check it to be even or odd using bitwise operator.
#include<stdio.h>
main()
{
    int n;
    printf("Input a number: ");
    scanf("%d",&n);
    if(n & 1 == 1)
	printf("%d is an Odd Number.", n); 
	else 
	printf("%d is an Even Number.",n) ;
    return 0;   
}

