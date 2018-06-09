#include <stdio.h>
void swap(int *data, int a, int b){
	int end = (b - a) / 2 + 1;
	for(int i = 0; i < end; i++){
		int temp = data[a+i];
		data[a+i] = data[b-i];
		data[b-i] = temp;
	}
}
int main(){
	int m, n;
	scanf("%d%d", &n, &m);
	int data[n];
	for(int i = 0; i < n; i++){
		data[i] = i + 1;
	}
	int a[m], b[m];
	for(int i = 0; i < m; i++){
		scanf("%d%d", &a[i], &b[i]);
	}
	for(int i = 0; i < m; i++){
		swap(data, a[i]-1, b[i]-1);
	}
	for(int i = 0; i < n; i++){
		printf("%d ", data[i]);
	}
	printf("\n");
	return 0;
}
