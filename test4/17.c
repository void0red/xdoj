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
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void sort(int *data, int n){
	int flag = 1;
	for(int i = 0; flag && i < n - 1; i++){
		flag = 0;
		for(int j = 0; j < n - i - 1; j++){
			if(data[j] > data[j+1]){
				flag = 1;
				swap(&data[j], &data[j+1]);
			}
		}
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int data[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &data[i]);
	}
	int su[n],j = 0;
	for(int i = 0; i < n; i++){
		if(foo(data[i])){
			su[j++] = data[i];
		}
	}
	sort(su, j);
	for(int i = 0; i < j; i++){
		printf("%d ", su[i]);
	}
	printf("\n");
	return 0;
}