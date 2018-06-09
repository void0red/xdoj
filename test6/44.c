#include <stdio.h>
void del(int *a, int pos, int len){
	for(int i = pos; i < len; i++){
		a[i] = a[i + 1];
	}
}
int get_min(int *a, int len){
	int pos = 0;
	int min = a[0];
	for(int i = 0; i < len; i++){
		if(a[i] < min){
			pos = i;
			min = a[i];
		}
	}
	return pos;
}
int main(){
	int m,n;
	scanf("%d%d", &n, &m);
	int price[m], sum[m];
	for(int i = 0; i < m; i++){
		scanf("%d%d", price + i, sum + i);
	}
	int money = 0;
	int summary = 0;
	while(m > 0){
		int index = get_min(price, m);
		if(sum[index] + summary < n){
			money += sum[index] * price[index];
			summary += sum[index];
			del(sum, index, m);
			del(price, index, m);
			m--;
		}else{
			money += (n - summary) * price[index];
			break;
		}
	}
	printf("%d\n", money);
	return 0;
}
