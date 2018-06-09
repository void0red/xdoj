#include <stdio.h>
void move(int n, char a, char b, char c){
    if(n == 1){
        printf("%c --> %c\n", a, c);
    }
    else{
        move(n-1, a, c, b);
        printf("%c --> %c\n", a, c);
        move(n-1, b, a, c);
    }
}

int main(){
	int n;
	scanf("%d", &n);
	move(n, 'A', 'B', 'C');
	return 0;
}