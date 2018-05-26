#include <stdio.h>
long long int jx(int x){
	return (x<=1)?x:x*jx(x-1);
}
int main(){
	int n;
	scanf("%d", &n);
	printf("%lld\n", jx(n));
	return 0;
}