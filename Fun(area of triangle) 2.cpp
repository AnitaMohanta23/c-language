#include<stdio.h>
void triangle();
void triangle()
{
	float h=10,b=20,area;
	area=0.5*h*b;
	printf("area of triangle=%f",area);
}
int main()
{
	triangle();
	return 0;
}
