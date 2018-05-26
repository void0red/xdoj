#include <stdio.h>
#include <math.h>
int main(){
	int x;
	scanf("%d", &x);
	if(x >= 0 && x < 10){
		printf("%.2f\n", 2*cos(x + 30 * 3.141592654 / 180));
	}else if(x >= 10 && x < 30){
		printf("%.2f\n", sqrt(4.1 + 5 * x * x));
	}else if(x >= 30 && x < 50){
		printf("%.2f\n", 1.75*(x-3) + 45);
	}else{
		printf("error\n");
	}
	return 0;
}