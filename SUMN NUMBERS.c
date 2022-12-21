// WAP To Find Sum Of Given n Numbers :
#include<stdio.h>
#include<conio.h>
 void main()
  {
  	int i,n,a[100],sum=0;
  	printf("How many Numbers To be Stored :");
  	scanf("%d",&n);
  	printf("enter all number");
  	  for(i=0; i<n;i++)
  	  {
  	  	scanf("%d",&a[i]);
  	  	sum=sum+a[i];
  	  	
		}
  	      printf("Sum Value :%d\n",sum);
  	      getch();
  }
