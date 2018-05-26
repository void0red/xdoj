#include <stdio.h>
int main(){
	for(int i = 0; i < 10000; i++){
		int tmp = i;
		if((tmp-1)%5 == 0){
			tmp = (tmp - 1) * 4 / 5;
			if((tmp-1)%5 == 0){
				tmp = (tmp - 1) * 4 / 5;
				if((tmp-1)%5 == 0){
					tmp = (tmp - 1) * 4 / 5;
					if((tmp-1)%5 == 0){
						tmp = (tmp - 1) * 4 / 5;
						if((tmp-1)%5 == 0){
							printf("%d\n", i);
							return 0;
						}
					}
				}
			}
		}
	}
	return 0;
}