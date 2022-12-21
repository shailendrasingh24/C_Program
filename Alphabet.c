// WAP To Check Weather Given Alphabet is Vowel or Consonent:
 
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 	char alpha;
 	clrscr();
 	printf("Enter the Alphabet");
 	scanf("%c",&alpha);
 	 if(alpha=='A'|| alpha=='E'|| alpha=='I'|| alpha=='O'|| alpha=='U')
 	  printf("Its is The Vowels");
 	  else
 	  printf("Its is The Consonet");
 }
