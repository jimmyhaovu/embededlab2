#include <stdio.h>

int main() {
	int length = 5;
	int a[length];
	for (int i = 0;i < length; i++) {
		printf("Xin moi nhap gia tri a[%d]:", i);
		scanf("%d",&a[i]);
	}
	for(int i = 0;i< length;i++) {
		printf("a[%d]:%d\n", i ,a[i]);
	}
	return 0;
}
