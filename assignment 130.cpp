#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[10],size,num=0;
	printf("enter the size of array: ");
	scanf("%d",&size);
	printf("enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[i]==5&&a[i+1]!=5&&a[i+2]==5)
		{
			num=num+1;
		}
		
	}
	printf("\n");
	if(num==4)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
