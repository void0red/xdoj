#include <stdio.h>
#include <math.h>
double sqr(double x){  
    double k=x;  
    while(k*k-x>1e-9)  
        k=0.5*(k+x/k);  
    return k;
}  
int main(){
	double n;
	scanf("%lf", &n);
	printf("%.2f\n", sqr(n));
	return 0;
}