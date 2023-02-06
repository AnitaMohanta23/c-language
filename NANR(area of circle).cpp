#include<stdio.h>
void mul();
void mul()
{
	int r=6,area;
	area=3.14*r*r;
	printf("area of circle %d",area);
}
int main(){
	mul();
	return 0;
}
