#include <stdio.h>
#define COUNT 5

float s_hinh_chu_nhat(float dc, float cv) {
	if (cv <= (2*dc)) {
		printf("Vui long nhap lai");
		return 0;
	} else {
		return (float)((cv*cv/4 - dc*dc)/2);
	}
}

int main() {
	printf("Dien tich hinh chu nhat la:%f", s_hinh_chu_nhat(5.1234, 16.34));
	return 0;
}

//int main() {
//	int a[COUNT];
//	int tong;
//	for (int i = 0;i < COUNT; i++) {
//		printf("Xin moi nhap gia tri a[%d]:", i);
//		scanf("%d",&a[i]);
//		tong+=a[i];
//	}
//	for(int i = 0;i< COUNT;i++) {
//		printf("a[%d]:%d\n", i ,a[i]);
//	}
//	printf("Trung binh cong: %d\n", tong/COUNT);
//	for (int i = 0;i < COUNT;i++) {
//		if (a[i] < tong/COUNT) {
//			printf("Gia tri nho hon trung binh cong la:%d\n", a[i]);
//		}
//	}
//	return 0;
//}
