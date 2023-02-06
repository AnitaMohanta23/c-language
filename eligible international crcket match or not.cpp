#include<stdio.h>
int main()
{
	int a=28,h=168,m=52,r=2000,w=80;
	if(a>=17){
		if(h>=160){
			if(m>=50){
				if(r>=5000&&w>=70){
					printf("cong!!!ur eligible for international match");
				}
				else{
					printf("sry!!!ur not eligible for international match because of less no of run or less no of wicket");
				}
			}
		else{
			printf("sry!!!ur not eligible for international match because of match");
		}
	}
else{
	printf("sry!!!ur not eligible for international match because of height");
}
}
else{
	printf("sry!!!ur not eligible for international match because of age");
}
return 0;
}






