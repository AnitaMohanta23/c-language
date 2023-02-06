#include<stdio.h>
int main()
{
	int a=18,h=185,w=92;
	if(a>=18){
		if(h>=168){
			if(h>=50){
				printf("cong!!!ur eligible for donating blood");
				
			}
			else{
				printf("sry!!ur not eligible because of weight");
			}
			
		}
		else{
			printf("sry!!ur not eligible because of height");
		}
	}
	else{
		printf("sry!!ur not eligible because of age");
	}
	return 0;
}
