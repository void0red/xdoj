#include <stdio.h>
#include <math.h>
int main(){
	float x;
	scanf("%f", &x);
	double a = 1,c = 1;
	for(int i = 1; ; i+=2){
		a *= x*x/(i*(i+1))*(-1);
		if(fabs(a) < 1e-6){
			break;
		}
		c += a;
	}
	printf("%.6f\n", c);
}