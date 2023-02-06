#include<stdio.h>
void fun()
{
	printf("Hello i am a function\n");
}
int main()
{
	int i;
	for(i=1;i<=10;i++){
		fun();
	}
	return 0;
}
