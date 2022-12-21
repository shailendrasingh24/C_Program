#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,i,rev;
	printf("Enter the Ten Element :\n");
	scanf("%d",&n);
	printf("Enter All Number :");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		rev=a[i];
		a[i]=a[n-i];
		a[n-i]=rev;
		
	}
	printf(" Reverse order is :%d",a[i]);
	  getch();
}
