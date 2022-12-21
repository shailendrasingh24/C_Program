//WAP To Find Sum of Lower Diagonal Elements of A Two D Array Of Size4*4:
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[4][4],i,j,sum=0;
	printf("Enter Two d Array of Size 4*4: ");
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			scanf("%d",&a[i][j]);
		}	
	}
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			if(i>j)
			sum=sum+a[i][j];
		}
	}
	printf("sum Of diagonal Value: %d",sum);
	 getch();
}
