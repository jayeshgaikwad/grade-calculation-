#include<stdio.h>
void main()
{
	int marks;
	printf(" ENTER YOUR MARKS ");
	scanf("%d" ,&marks);
	if(marks<0 || marks>100)
	{
		printf("WRONG ENTRY");
	}
	else if(marks<50)
	{
	 printf("GRADE F");
	}
	else if (marks>=50 && marks<60)
	{
		printf("GRADE D");
	}
	else if(marks>=60 && marks<70)
	{
		printf("GRADE c");
	}
	else if(marks>=70 && marks<80)
	{
		printf("GRADE B");
	}
	else if(marks>=80 && marks<90)
	{
		printf("GRADE A");
	}
	else
	{
		printf("GRADE A+");
	}
}
