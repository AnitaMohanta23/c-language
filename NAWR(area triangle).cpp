#include<stdio.h>
int mul();
int mul()
{
	int h=30,b=20,area;
	area=0.5*h*b;
	return area;
}
int main()
{
	int result;
	result=mul();
	printf("area of triangle %d",result);
	return 0;
}
