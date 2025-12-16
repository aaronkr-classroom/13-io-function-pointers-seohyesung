// fptr_grp.c
#include <stdio.h>

int Sum(int a, int b) { return a + b; }
int Sub(int a, int b) { return a - b; }
int Mul(int a, int b) { return a * b; }
int Div(int a, int b) { return a / b; }
int Rem(int a, int b) { return a % b; }

int main(void) {
	// 함수 포인터 배열 선언 및 초기화
	int (*p[5])(int, int) = { 
		&Sum, &Sub, &Mul, &Div, &Rem 
	};
	int x = 9, y = 4;
	char op_table[5] = {"+", "-", "*", "/", "%"};
	// 함수 포인터 배열을 사용하여 각 함수 호출
	for (int i = 0; i < sizeof(op_table); i++) {
		int result = func_ptrs[i](a, b);
		printf("%d %c %d  = %d\n", x, op_table, y, (*p[i])(x, y));

	}
	return 0;
}