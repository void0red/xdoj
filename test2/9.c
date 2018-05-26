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
	for(int i = 1000; i < 10000; i++){
		int tmp = i;
		int p = tmp%10*1000;
		p += tmp/10%10*100;
		p += tmp/100%10*10;
		p += tmp/1000;
		if(foo(i) == 1 && foo(p) == 1){
			printf("%d\n", i);
		}
	}
	return 0;
}