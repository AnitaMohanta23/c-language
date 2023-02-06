#include<stdio.h>
void rectangle(int,int);
void rectangle(int l,int b)
{
	int area;
	area=l*b;
	printf("area of rectangle %d",area);
}
int main()
{
	rectangle(20,30);
	return 0;
}

