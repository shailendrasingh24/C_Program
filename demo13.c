//Q. WAP To print Fibonacci Series:

#include<stdio.h>
#include<conio.h>
 void main()
 {
 	int n,a=0,b=1,i,next;
 	printf("Enter Number of Term to Print:");
 	scanf("%d",&n);
    printf("%d\t%d\t",a,b);
    for(i=1; i<=n-2; i++)
    {
    	next= a+b;
    	printf("%d\t",next);
    	a=b;
    	b=next;
	}

 	  getch();
 }
