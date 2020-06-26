#include <stdio.h>

// var int (int8_t, int16_t, int32_t)
int i;

// var structure
// style 1
typedef enum {
	 a,
	 b,
	 c
}enum_t;

// style 2
typedef struct {
	int m;
	int n[5];
	char text[5];
}m_t;

void fc01(void);
void fc02(void);
// function has param
void fc03(int channel, int min, int max);
// function with cursor
int fc04(int* x, int *y);
int d = 5;
int e = 10;

int main(void) {
	//fc01();
	//fc02();
	//fc03(2, 1, 10);
	// call cursor function
	printf("function 4: %d", fc04(&d, &e));
	while(1) {
		// do something
	};
	return 0;
}

void fc01(void) {
	int j = 0;
	for (i=0;i<10;i++) {
		printf("Hello fc01 with i %d\n\r", i);
	}
	
	for (j=0;j<10;j++) {
		printf("Hello fc01 with j %d\n\r", j);
	}
	
	// implement struct var
	// style 1
	enum_t m;
	printf("a %d\n",a);
	printf("b %d\n",b);
	printf("c %d\n",c);
	
	// style 2
	m_t k;
	k.m = 5;
	k.n[0] = 1;
	k.text[0] = 'd';
	printf("m_t %d %c %d", k.m,k.text[0], k.n[0]);
	
}

void fc02(void) {
	fc01();
	printf("Hello fc02\n");
}

void fc03(int channel, int min, int max) {
	printf("chanel %d, min %d, max %d", channel, min, max);
}

int fc04(int* x, int *y) {
	printf("d %d[%d]\ne %d[%d]\n", x, *x, y, *y);
	if (*x > 10) {
		return *x; 
	} else {
		return *y;
	}
}
