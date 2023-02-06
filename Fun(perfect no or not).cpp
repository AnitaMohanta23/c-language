#include<stdio.h>
int main()
{
	int num,i,result=0;
	printf("enter the num:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		if(num%i==0)
		result=result+i;
	}
	if(result==num){
		printf("perfect number");
	}
	else{
		printf("not perfect number");
	}
	return 0;
}
