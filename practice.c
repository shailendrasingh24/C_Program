#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,rev;
	printf("Enter the Any Element :\n");
	scanf("%d",&n);
	printf("Enter The All Number :");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<n/2; i++)
	{
		rev=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=rev;
		
	}
	for(i=0; i<n; i++)
	{
		printf("Reverse Order is: %d\n",a[i]);
		
	}
	  getch();
}
