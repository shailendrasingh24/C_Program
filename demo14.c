//WAP To Find Factorial Using Resursion:

#include<stdio.h>
#include<conio.h>

int fact (int);//function prototype
int fact(int n)
{                 // function of definition
	if(n==0)
	return 1;
	else
	return n*fact(n-1);
}
main()
{
	int x;
	printf("Enter Number");
	scanf("%d",&x);
	fact(x);                 //function call
    printf("%d",fact(x));
}
