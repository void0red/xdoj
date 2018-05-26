#include <stdio.h>
float foo(int x){
	float tmp = x * 1.0;
	if(x >= 3500){
		tmp = x * (1-0.19) - 3500;
	}
	float re;
	if(tmp <= 1500){
		re = tmp * 0.03;
	}else if(tmp <= 4500){
		re = tmp * 0.1 - 105;
	}else if(tmp <= 9000){
		re = tmp * 0.2 - 555;
	}else if(tmp <= 35000){
		re = tmp * 0.25 - 1005;
	}else if(tmp <= 55000){
		re = tmp * 0.3 - 2755;
	}else if(tmp <= 80000){
		re = tmp * 0.35 - 5505;
	}else{
		re = tmp * 0.45 - 13505;
	}
	return re;
}
int main(){
	int x = 0;
	scanf("%d",&x);
	printf("%.2f\n", foo(x));
	return 0;
}