#include<stdio.h>
int main()
{
	int a,i;
	for(a=1;a<=5;a++)
	{
		for(i=1;i<=5;i++)
		{
			if(a%2==0)
			printf("%d",a);
			else
			printf("%d",i);
		}
		printf(" \n");
	}
	return 0;
}
