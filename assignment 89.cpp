#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[5],t=0;
	printf("enter any five number\n");
	
	for(i=0;i<5;i++)
	{
		printf("enter number");
		scanf("%d",&a[i]);
		
	}
	int count =0;
	for(i=0;i<5;i++)
	{
		if(a[i]==5 && (a[i+1]==5 || a[i+1]==6))
		{
			count=count+1;
		}
		
	}
	printf("%d",count);
}
