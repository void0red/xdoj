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
	int m;
	scanf("%d", &m);
	for(int i = m/2; i > 0; i--){
		if(foo(i) && foo(m-i)){
			printf("%d %d\n", i, m-i);
			break;
		}
	}
	return 0;
}