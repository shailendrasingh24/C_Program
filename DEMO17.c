//
#include<stdio.h>
#include<conio.h>
 void main()
  {
  	int i,n,a[100],item,count=0;
  	printf("How Many Item To be Stored :");
  	scanf("%d",&n);
  	printf("Enter All Number :");
  	 for(i=0; i<n; i++)
  	  {
  	  	scanf("%d",&a[i]);
  	  	
		}
		printf("Enter The Number To Be Searched :");
		scanf("%d",&item);
		for(i=0; i<n; i++)
		 {
		 	if(item==a[i])
		 	count++;
		 	}
		 	printf("Its is present %d %d",item,count);
		  getch();
  }
