#include<stdio.h>
void mark(int,int,int,int,int,int);
void mark(int p,int c,int m,int b,int e,int i){
	int totalmark;
	float avgm;
	totalmark=p+c+m+b+e+i;
	avgm=totalmark/6;
	printf("total mark is %d",totalmark);
	printf("avrage mark is %f",avgm);
	
}
int main()
{
	mark(90,80,78,84,68,77);
	return 0;
}
