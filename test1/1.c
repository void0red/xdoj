#include <stdio.h>
int main(){
	int m,n;
	scanf("%d%d", &m, &n);
	printf("%d %d %d\n", m*m-n*n, 2*m*n, m*m+n*n);
	return 0;
}