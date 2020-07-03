#include <stdio.h>

int *ptr1 = (int*)12;
int a = 4202580, b = 25, c = 45;

int main() {
	printf("ptr1 address:%d\n", &ptr1);
	printf("ptr1 value:%d\n", ptr1);
	printf("a address:%d\n", &a);
	printf("a value:%d\n", a);
	ptr1 = &a;
	printf("ptr1 new value:%d\n", *ptr1);
	printf("ptr1 new adress:%d\n", &ptr1);
	printf("ptr1 new value:%d\n", *(int*)(*(ptr1)));
	return 0;
}
