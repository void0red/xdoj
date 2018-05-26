#include <stdio.h>
int jx(int x){
	return (x<=1)?1:x*jx(x-1);
}
int foo(int n, int m){
	if(m == 0){
		return 1;
	}else if(m == 1){
		return n;
	}
	int x = 1;
	for(int i = n; i > m; i--){
		x *= i;
	}
	return x/jx(n-m);
}
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i+1; j++){
			printf("%d ", foo(i, j));
		}
		printf("\n");
	}
	return 0;
}