// Write Recursive Function To Print nth term of fibonacci series :
#include<stdio.h>
#include<conio.h>
int fib(int);
int fib(int n)
{
	if(n==1)
	return 0;
	else if (n==2)
	return 1;
	else
	   return fib(n-1)+fib(n-2);	
}
main()
{
	int i,n;
	printf("Enter The Any Number:");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	   printf("%d\t",fib (i));
}

