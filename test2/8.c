#include <stdio.h>
#include <math.h>
int foo(int x){
	if(x <= 1){
		return 0;
	}else if(x == 2){
		return 1;
	}
	for(int i = 2; i <= pow(x,0.5); i++){
		if(x%i == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int x;
	scanf("%d", &x);
	printf("%d\n", foo(x));
	return 0;
}