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
	int n;
	scanf("%d", &n);
	int data[n-1];
	for(int i = 0; i < n - 1; i++){
		data[i] = i + 2;
	}
	for(int i = 0; i < n - 1; i++){
		if(data[i] != 0 && foo(data[i])){
			printf("%d\n", data[i]);
			for(int j = i; j < n -1; j++){
				if(data[j]%data[i] == 0){
					data[j] == 0;
				}
			}
		}
	}
	return 0;	
}