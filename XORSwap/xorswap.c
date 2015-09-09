#include <stdio.h>

void xor_swap(int* a, int* b) {
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

int main(int argc, char** argv) {
	int a = 3;
	int b = 8;
	printf("a: %d, b: %d\n", a, b);
	xor_swap(&a, &b);
	printf("a: %d, b: %d\n", a, b);
}
