#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
	char s[1000];
	scanf("%s", s);
	int x = 0;
	for(int i = 0; i < strlen(s); i++){
		if(s[i] >= '0' && s[i] <= '9'){
			x  = x * 10 + s[i] - '0';
		}
	}
	printf("%d %.2f\n",x, pow(x, 0.5));
	return 0;
}