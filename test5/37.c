#include <stdio.h>
int main(){
	int n,m;
	scanf("%d%d", &n, &m);
	int data[n];
	for(int i = 0; i < n; i++){
		data[i] = i + 1;
	}
	int sum = n;
	int pos = 0;
	while(sum > 1){
		pos += m-1;
		pos %= sum;
		printf("%d,", data[pos]);
		sum--;
		for(int j = pos; j < sum; j++){
			data[j] = data[j+1];
		}
	}
	printf("%d\n", data[0]);
	return 0;
}