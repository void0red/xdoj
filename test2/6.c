#include <stdio.h>
int main(){
	for(int i = 1000; i <= 10000/9; i++){
		int x1 = i;
		int x2 = i*9;
		if(x1 % 10 == x2 / 1000){
			if(x1/10%10 == x2/100%10){
				if(x1/100%10 == x2/10%10){
					if(x1/1000 == x2%10){
						printf("%d\n", i);
					}
				}
			}
		}
	}
	return 0;
}