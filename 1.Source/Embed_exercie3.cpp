#include <stdio.h>
#include <string.h>

/*
	Conditions lab
*/
void addswitch(int condition);
void delay(long a);
void draw(int h);
int main() {
	draw(21);
//	int i;
	while(1){
	//	if (i == 3) {
//			i = 0;
//		}
//		addswitch(i);
//		delay(100000000);
//		i++;
		
	}
	return 0;
}

void draw(int h) {
	int m = 0;
	int k = h;
	for(int i=1;i<h;i++) {
		for(int j = k;j>0;j--) {
			printf(" ");
		}
		while(m > 0){
			printf("*");
			m--;
		}
		if(i > 2){
			for(int z=0;z<i-2;z++)
				printf("*");
		}
		printf("\n");
		m = i;
		k--;
	}
}

void addswitch(int condition){
	// switch case
	switch (condition) {
		case 0:
			printf("Hello everybody\n");
			break;
		case 1:
			printf("Hello A\n");
			break;
		case 2:
			printf("Hello B\n");
			break;
		default:
			break;
	}
}
void delay(long a) {
	while(a--);
}
