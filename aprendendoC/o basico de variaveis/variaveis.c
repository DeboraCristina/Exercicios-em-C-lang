#include <stdio.h>

int main(){
	/* o compilador até compila mas não é o correto
	int _a;
	_a = 0;
	int A = 0;*/
	int a = 42;
	int b = 89;

	printf("hello, world%d! i'm %d.\n", a, b);
	b = a;
	a = 12;
	printf("hello, world%d! i'm %d.\n", a, b);
}
