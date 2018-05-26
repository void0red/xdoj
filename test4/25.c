#include <stdio.h>
#include <string.h>
void foo(char *p, char*q){
	int len_p = strlen(p);
	int len_q = strlen(q);
	int len = (len_p<len_q)?len_p:len_q;
	int i = 0;
	for(i = 0; i < len; i++){
		if(p[i] != q[i]){
			break;
		}
	}
	p[i] = '\0';
}
int main(){
	char p[1000], q[1000];
	scanf("%s", p);
	scanf("%s", q);
	foo(p, q);
	printf("%s\n",p);
	return 0;
}