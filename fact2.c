//factorial with recursion
#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
	int no,ans;
	printf("\n\t ENTER A NUMBER : ");
	scanf("%d",&no);
	
	
	printf("\n\n----OUTPUT-----------------------\n");
	ans=fact(no);
	printf("\n\t FACTORIAL OF %d IS : %d",no,ans);
	getch();
}
int fact(int n)
{
	
	if(n>=1)
	{
		return n*fact(n-1);
	}
	else
	  return 1;
	
}
