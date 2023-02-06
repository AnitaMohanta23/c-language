#include<stdio.h>
int check(int);
int check(int num)
{
	int found=0;
	if(num%2==0)
	{
		found=1;
	}
	return found;
}
int main()
{
	int data;
	data=check(5);
	if(data==1)
	{
		printf("positive");
	}
	else{
		printf("negative");
	}
	return 0;
}
