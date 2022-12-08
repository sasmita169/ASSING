//*enter 10 number from user and find sum of even number and odd unmber
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,num[10],se=0,so=0;
	printf("Enter 10 number from user:\n");
	for(i=0;i<=9;i++)
		scanf("%d",&num[i]);
	for (i=0;i<=9;i++)
	{
	if(num[i]%2==0)
		  se=se+num[i];
     else
	    so=so+num[i];	 
	}
	printf("\nSUM OF ALL EVEN NUM IS %d",se);
	printf("\n SUM OF ALL ODD NUM IS %d",so);
	 getch();
}
