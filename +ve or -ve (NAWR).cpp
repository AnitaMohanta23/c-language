#include<stdio.h>
int check();
int check()
{
	int num=12,count=0;
	if(num%2==0)
	{
		count=1;
	}
	return count;
}
int main()
{
	int data;
	data=check();
	if(data==1)
	printf("number is positive");
	else
	printf("number is negative");
	return 0;
}
