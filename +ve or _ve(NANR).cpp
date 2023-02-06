#include<stdio.h>
void check();
void check()
{
	int num=4;
	if(num%2==0)
	{
		printf("number is positive");
	}
	else{
		printf("number is negative");
	}
}
int main()
{
	check();
	return 0;
}
