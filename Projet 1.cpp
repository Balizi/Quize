#include<stdio.h>
#include<conio.h>
main()
{
	int Q1;
	int s=0,r=0,f=0;
	printf("The Rule Of This Game is if Your Answer is Right we Add To Your Score 2 Point if it False We Remove To Your Score 2 Point\n\n");
	printf("-------Welcome To Quiz Game-------\n");
	printf("Question 1) What is The results of this operation 20+3-2*6 \n");
	printf("Answer 1 : 11\n");
	printf("Answer 2 : 126\n");
	printf("Answer 3 : 156\n");
	printf("Chose the solution : ");
	scanf("%d",&Q1);
	switch(Q1)
	{
		case 1:{
			s+=2;
			r++;
			printf("Your Answer is Right ,Your Score is : %d",s);
		};break;
		case 2:{
			if(s>0)
				s-=2;
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		case 3:{
			if(s>0)
				s-=2;
			
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
			
		};break;
		default :printf("Your Answer dose not existe Try again......");
	}
	printf("\n\nQuestion 2) what is the Sum of Angles To Triangle \n");
	printf("Answer 1 : 160\n");
	printf("Answer 2 : 180\n");
	printf("Answer 3 : 220\n");
	printf("Chose the solution : ");
	scanf("%d",&Q1);
	switch(Q1)
	{
		case 1:{
			if(s>0)
				s-=2;
			
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
			
		};break;
		case 2:{
			s+=2;
			r++;
			printf("Your Answer is Right ,Your Score is : %d",s);
		};break;
		case 3:{
			if(s>0)
				s-=2;
			
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		
		};break;
		default :printf("Your Answer dose not existe Try again......");
	}
	printf("\n\nQuestion 3) Who is the inventor of electricity \n");
	printf("Answer 1 : Reo Goder\n");
	printf("Answer 2 : Armstrong Neil\n");
	printf("Answer 3 : Thomasse Edison\n");
	printf("Chose the solution : ");
	scanf("%d",&Q1);
	switch(Q1)
	{
		case 1:{
			if(s>0)
				s-=2;
			
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		case 2:{
			if(s>0)
				s-=2;
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		case 3:{
			s+=2;
			r++;
			printf("Your Answer is Right ,Your Score is : %d",s);
		};break;
		default :printf("Your Answer dose not existe Try try again......");
	}
	printf("\n\nQuestion 4) What is The Capitale of Holanda \n");
	printf("Answer 1 : Bruxelles\n");
	printf("Answer 2 : Amsterdam\n");
	printf("Answer 3 : Rotterdam\n");
	printf("Chose the solution : ");
	scanf("%d",&Q1);
	switch(Q1)
	{
		case 1:{
			if(s>0)
				s-=2;
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		case 2:{
			s+=2;
			r++;
			printf("Your Answer is Right ,Your Score is : %d",s);
		
		};break;
		case 3:{
			if(s>0)
				s-=2;
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		default :printf("Your Answer dose not existe Try again......");
	}
	printf("\n\nQuestion 5) Who Make the First Version of HTML \n");
	printf("Answer 1 : Ragnar Lothbrok\n");
	printf("Answer 2 : Richard Movitch\n");
	printf("Answer 3 : Tim Berners-Lee\n");
	printf("Chose the solution : ");
	scanf("%d",&Q1);
	switch(Q1)
	{
		case 1:{
			if(s>0)
				s-=2;
			
			f++;;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		case 2:{
			if(s==0)
				s=0;
			else
				s-=2;
			f++;;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		case 3:{
			s+=2;
			r++;
			printf("Your Answer is Right ,Your Score is : %d",s);
		};break;
		default :printf("Your Answer dose not existe Try again......");
	}
	printf("\n\nQuestion 6) what is the language programing by windows  \n");
	printf("Answer 1 : R\n");
	printf("Answer 2 : C\n");
	printf("Answer 3 : GO\n");
	printf("Chose the solution : ");
	scanf("%d",&Q1);
	switch(Q1)
	{
		case 1:{
			if(s>0)
				s-=2;
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		case 2:{
			r++;
			s+=2;
			printf("Your Answer is Right ,Your Score is : %d",s);
		};break;
		case 3:{
			if(s>0)
				s-=2;
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		default :printf("Your Answer dose not existe Try again......");
	}
	printf("\n\nQuestion 7) What is The FreamWork Of Php More Use in Morocco  \n");
	printf("Answer 1 : CodeLgniter\n");
	printf("Answer 2 : Symfoney\n");
	printf("Answer 3 : Phalcon\n");
	printf("Answer 4 : Laravele\n");
	printf("Chose The Solution : ");
	scanf("%d",&Q1);
	switch(Q1)
	{
		case 1:{
			if(s>0)
				s-=2;
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		case 2:{
			if(s>0)
				s-=2;
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		case 3:{
			if(s>0)
				s-=2;
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		case 4:{
			s+=2;
			r++;
			printf("Your Answer is Right ,Your Score is : %d",s);
		};break;
		default :printf("Your Answer dose not existe Try again......");
	}
	printf("\n\nQuestion 8) What is The Capital Economique in Moroco  \n");
	printf("Answer 1 : Rabat\n");
	printf("Answer 2 : Fés\n");
	printf("Answer 3 : Casa\n");
	printf("Answer 4 : Tanjet\n");
	printf("Chose The Solution : ");
	scanf("%d",&Q1);
	switch(Q1)
	{
		case 1:{
			if(s>0)
				s-=2;
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
			
		};break;
		case 2:{
			if(s>0)
				s-=2;
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		case 3:{
			s+=2;
			r++;
			printf("Your Answer is Right ,Your Score is : %d",s);
			
		};break;
		case 4:{
			if(s>0)
				s-=2;
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		default :printf("Your Answer dose not existe Try again......");
	}
	printf("\n\nQuestion 9) What is The language Who doesn't Support Inheritance Than More One Classe  \n");
	printf("Answer 1 : C#\n");
	printf("Answer 2 : Java\n");
	printf("Answer 3 : C++\n");
	printf("Answer 4 : JavaScripte\n");
	printf("Chose The Solution : ");
	scanf("%d",&Q1);
	switch(Q1)
	{
		case 1:{
			s+=2;
			r++;
			printf("Your Answer is Right ,Your Score is : %d",s);
			
		};break;
		case 2:{
			if(s>0)
				s-=2;
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		case 3:{
			if(s>0)
				s-=2;
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		case 4:{
			if(s>0)
				s-=2;
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		default :printf("Your Answer dose not existe Try again......");
	}
	printf("\n\nQuestion 10) What is The Long River in The World  \n");
	printf("Answer 1 : Yangtze\n");
	printf("Answer 2 : Amazon\n");
	printf("Answer 3 : Nile\n");
	printf("Chose The Solution : ");
	scanf("%d",&Q1);
	switch(Q1)
	{
		case 1:{
			if(s>0)
				s-=2;
				
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		case 2:{
			if(s>0)
				s-=2;
			f++;
			printf("Your Answer is False ,Your Score is : %d",s);
		};break;
		case 3:{
			s+=2;
			r++;
			printf("Your Answer is Right ,Your Score is : %d",s);
		};break;
		default :printf("Your Answer dose not existe Try again......");
	}
	printf("\n\n\nThe End\n\n");
	printf("Your Score is %d\n\n",s);
	printf("You Passed 10 Question, %d is false and %d is Right\n\n",f,r);
	if(s>=10)
	{
		printf("You are Win");
	}
	else
	{
		printf("You lost");
	}
	getch();
}
