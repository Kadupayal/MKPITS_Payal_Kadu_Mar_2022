#include<stdio.h>
int main()
{
	char str1[88], str2[80];
	int i;
	printf("enter a string\n");
	scanf("%s",str2);
	for(i=0; str2[i]!='\0'; i++)
	str1[i]=str2[i];
	str1[i]='\0';
	printf("\n");
	printf("original string=%s\n",str1);
	printf("number of character =%d\n",i);
}
