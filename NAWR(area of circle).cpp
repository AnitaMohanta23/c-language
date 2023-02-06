#include<stdio.h>
int mul();
int mul()
{
	int r=10,area;
	area=3.14*r*r;
	return area;
}
int main(){
	int result;
	result=mul();
	printf("area of circle %d",result);
	return 0;
}
