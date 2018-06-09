#include<stdio.h>
void sort(int *data, int n){
	int flag = 1;
	for(int i = 0; flag && i < n - 1; i++){
		flag = 0;
		for(int j = 0; j < n - i - 1; j++){
			if(data[j] > data[j+1]){
				flag = 1;
				int temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
			}
		}
	}
}
int is_shunzi(int a, int b, int c){
	return (a == b - 1 && b == c - 1)?1:0;
}
int is_duizi(int a, int b, int c){
	return (a == b || b == c)?1:0;
}
int is_baozi(int a, int b, int c){
	return (a == b && b == c)?1:0;
}
int foo(int *src, int *tar){
	sort(src, 3);
	sort(tar, 3);
	if(tar[2] > src[2]){
		return 1;
	}else if(tar[2] == src[2]){
		if(tar[1] > src[1]){
			return 1;
		}else if(tar[1] == src[1]){
			if(tar[0] > src[0]){
				return 1;
			}
		}
	}
	return 0;
}
int main(){
	int data[3], ret = 0;
	scanf("%d%d%d", data, data+1, data+2);
	sort(data, 3);
	if(data[0] == data[1] && data[1] == data[2]){
		ret = 10 - data[0];
	}else if(is_shunzi(data[0], data[1], data[2])){
		for(int i = data[0]; i < 10; i++){
			for(int j = data[1]; j < 10; j++){
				for(int k = data[2]; k < 10; k++){
					if(i <= j && j <= k && is_shunzi(i, j, k)){
						// printf("%d %d %d\n", i, j, k);
						ret += 1;
					}
				}
			}
		}
		ret += 8;
	}else if(is_duizi(data[0], data[1], data[2])){
		int a, b;
		if(data[0] == data[1]){
			a = data[0];
			b = data[2];
		}else if(data[1] == data[2]){
			a = data[1];
			b = data[0];
		}
		for(int i = a; i < 10; i++){
			for(int j = 1; j < 10; j++){
				if(i == a && j > b && i != j){
					// printf("%d %d %d\n", i, i, j);
					ret += 1;
				}else if(i != a && i != j){
					// printf("%d %d %d\n", i, i, j);
					ret += 1;
				}
			}
		}
		ret += 9 + 7 - 1;
	}else{
		for(int i = 1; i < 10; i++){
			for(int j = 1; j < 10; j++){
				for(int k = 1; k < 10; k++){
					if(i <= j && j <= k && !is_baozi(i, j , k) && !is_shunzi(i, j, k) && !is_duizi(i, j, k)){
						int src[3];
						src[0] = i;
						src[1] = j;
						src[2] = k;
						if(foo(data, src)){
							// printf("%d %d %d\n", i, j, k);
							ret += 1;
						}
					}
				}
			}
		}
		ret += 7 + 9 * 9;
		if(data[0] == 2 && data[1] == 3 && data[2] == 5)ret -= 9;
	}
	printf("%d\n", ret);
	return 0;
}