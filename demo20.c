//WAP To Find Sum Of All Element of A Two D Array Of Size 2*4 :
#include<stdio.h> 
#include<conio.h>
 void main()
  {
  	int i,j,ar[2][4],sum=0;
  	printf("Enter All Element Of Two D Array : \n");
  	for(i=0; i<2; i++)
  	{
  		for(j=0; j<4; j++)
  		{ 
  		scanf("%d",&ar[i][j]);
  		sum=sum+ar[i][j];
        	}
        	 printf("sum is :%d",sum);
	  }
	   getch();
  }
