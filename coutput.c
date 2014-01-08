#include <stdio.h>

int main(void){
	double x;
	int y;
	printf("enter float: ");
	scanf("%d",&x);
	printf("enter int:");
	scanf("%lf",&y);
	printf("%d %.2lf\n",x,y);
	return 0;
}