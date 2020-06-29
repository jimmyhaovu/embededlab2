#include <stdio.h>
#define COUNT 5

int main() {
	int a[COUNT];
	int tong;
	for (int i = 0;i < COUNT; i++) {
		printf("Xin moi nhap gia tri a[%d]:", i);
		scanf("%d",&a[i]);
		tong+=a[i];
	}
	for(int i = 0;i< COUNT;i++) {
		printf("a[%d]:%d\n", i ,a[i]);
	}
	printf("Trung binh cong: %d\n", tong/COUNT);
	for (int i = 0;i < COUNT;i++) {
		if (a[i] < tong/COUNT) {
			printf("Gia tri nho hon trung binh cong la:%d\n", a[i]);
		}
	}
	return 0;
}
