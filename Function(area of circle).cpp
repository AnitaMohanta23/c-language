#include<stdio.h>
float circle();
float circle()
{
	int r=5;
	float pi=3.141;
	return r*r*3.141;
}
int main()
{
	float result;
	result=circle();
	printf("area or circle=%f",result);
	return 0;
}
