#include<stdio.h>
int mul(int,int);
int mul(int h,int b)
{
	int area;
	area=0.5*b*h;
	return area;
}
int main()
{
	int result;
	result=mul(50,60);
	printf("area of triangle %d",result);
	return 0;
}
