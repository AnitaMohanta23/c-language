#include<stdio.h>
void mul();
void mul()
{
	int h=30,b=20,area;
	area=0.5*h*b;
	printf("area of triangle %d",area);
}
int main(){
	mul();
	return 0;
}
