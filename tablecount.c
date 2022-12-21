#include<stdio.h>
#include<conio.h>
 void main()
 {
 	int a,n;
 	printf("Enter the Number To Print The table :");
 	scanf("%d",&n);
 	a=1;
 	while(a<=10)
 	{
 		printf("%d :\n",n*a);
 		a++;
	 }
        getch();
 }
