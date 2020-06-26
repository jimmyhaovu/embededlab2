#include <stdio.h>

int mtx[] = {
	1,
	15,
	37,
	26,
	7,
	4,
	100
};

// 2d array init case 1
int mtxB[3][3] {
	1,2,6,
	7,9,4,
	3,6,8
};
void sort(bool asc);
void array2d();
void sortarray2dasc();
int main() {
	//for(int i=100;i>0;i--) {
	//	printf("i = %x-%d\n", &i, i);	
	//}
	//int i = 100;
	//int tong;
	//while(i>0) {
		//tong+=i;
		//printf("i %d\n", i);
		//i--;
	//	}
	//do{
		//if (i%10==0){
			//tong+=i;
		//}
		//i--;
	//} while(i>0);
	//printf("tong %d", tong);
	//while(1) {
	//}
	//sort(false);
	array2d();
	sortarray2dasc();
	return 0;
}
void array2d() {
	//printf("mtxB[0][0] = %d", mtxB[0][0]);
	for(int i = 0;i < 3;i++){
		for(int j=0;j<3;j++) {
			printf("mtxB[%d][%d] = %d\n",i,j, mtxB[i][j]);	
		}
	}
	//aaaa
}
void sortarray2dasc() {
//	int length = sizeof(mtxB)/sizeof(0);
//	for (int i=0;i<length;i++) {
//		for (int j = i + 1;j < length;j++) {
//			if (mtxB[i] > mtxB[j]) {
//				int temp = mtxB[i];
//				mtxB[i] = mtxB[j];
//				mtxB[j] = temp;
//			}
//		}
//	}
//	for (int i=0;i<length;i++) {
//		printf("%d\n", mtxB[i]);
//	}
}
void sort(bool asc){
	// sort asc
	int length = sizeof(mtx)/sizeof(0);
	if (asc) {
		for (int i=0;i<length;i++) {
			for (int j = i + 1;j < length;j++) {
				if (mtx[i] > mtx[j]) {
					int temp = mtx[i];
					mtx[i] = mtx[j];
					mtx[j] = temp;
				}
			}
		}
		
	} else {
		for (int i=0;i<length;i++) {
			for (int j = i + 1;j < length;j++) {
				if (mtx[i] < mtx[j]) {
					int temp = mtx[i];
					mtx[i] = mtx[j];
					mtx[j] = temp;
				}
			}
		}
	}
	
	for (int i=0;i<length;i++) {
		printf("%d\n", mtx[i]);
	}
}
