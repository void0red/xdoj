#include <stdio.h>
int main(){
	int m,n;
	scanf("%d%d", &m, &n);
	float t = m + n*1.0/60.0;
	printf("%.2f\n", 4*t*t/(t+2) - 20);
	return 0;
}