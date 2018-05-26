#include <stdio.h>
int foo(int x){
	int tmp = x;
	int len = 0;
	while(tmp > 0){
		len += 1;
		tmp /= 10;
	}
	while(x > 0){
		int t = 1;
		for(int i = 0; i < len - 1; i++){
			t *= 10;
		}
		int p = x / t  % 10;
		int q = x % 10;
		if(p != q){
			return 0;
		}
		x /= 10;
		len -= 2;
	}
	return 1;
}
int main(){
	int x = 0;
	scanf("%d", &x);
	printf("%d\n", foo(x));
}