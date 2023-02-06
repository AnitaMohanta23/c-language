#include<stdio.h>
int main()
{
	int A,B,C;
	printf("Enter the numA,B&C\n");
	scanf("%d%d%d",&A,&B,&C);
	if(A>=B&&A>=C)
	printf("%d is the greater num.",A);
	if(B>=A&&B>C)
	printf("%d is the greater num.",B);
	if(C>=A&&C>=B)
	printf("%d is the greater num.",C);
	return 0;
	
}
