#include<stdio.h>
#include<conio.h>
void main()
{
	int m1,m2,m3,m4,m5;
	float per;
	printf("Enter the mark of five subject");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	per=(m1+m2+m3+m4+m5)/500.01*100;
	if(per>=60)
	printf("First Division");
	 else
	 if(per<60 && per>=50)
	 printf("Second Division");
	  else 
	  printf("Third Division");
}
