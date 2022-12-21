#include<stdio.h>
#include<conio.h>
 void main()
 {
 	int math,physics,hindi,biology,chemestry,total;
	float per;
 		printf("Enter the Math Numbers");
 	scanf("%d",&math);
 	    printf("Enter the Physics Number");
 	scanf("%d",&physics);
 		printf("Enter the hindi Number");
 	scanf("%d",&hindi);
 		printf("Enter the  biology Number");
 	 scanf("%d",&biology);
 	 printf("Enter the  chemestry Number");
 	 scanf("%d",&chemestry);
 	 total=math+physics+hindi+biology+chemestry;
 	 per=(total/500)*100;
     if(per>=60)
 	 
 	 	printf("first Division");
 	 	
 	     else
		 if(per<60 &&per>=50)
 	  
 	  	printf("Second Division");
 	  	else
	        printf("Third division");

	  getch();
 	
 }
