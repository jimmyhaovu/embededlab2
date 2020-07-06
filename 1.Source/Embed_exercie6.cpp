#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

int main() {
//	long *ptr;
//	int i;
//	ptr = (long *) calloc(5, sizeof(long *));
//	if (ptr != NULL) {
//		*ptr = 1; *(ptr + 1) = 2;
//		ptr[2] = 4; ptr[3] = 8; ptr[4] = 16;
//		printf("%d\n", &(*(ptr)));
//		printf("%d\n", &(*(ptr + 1)));
//		printf("%d\n", &(*(ptr + 2)));
//		printf("%d\n", ptr + 3);
//		printf("%d\n", ptr + 4);
//		//ptr = (int *) realloc (ptr, 7*sizeof(int));
////		if (ptr != NULL) {
////			printf("aaaa");
////		} 
//	}

//	// Malloc
//	unsigned char *ptr, i;
//	ptr = (unsigned char *) malloc(sizeof(1));
//	*ptr = -129;
//	printf("Value:%d\n", *ptr);
//	printf("Address:%d", ptr);
//	int *ptr, a;
//	ptr = &a;
//	for (int i=0;i<5;i++) {
//		*ptr = i;
//		printf("%d, %d, %d\n", *ptr, ptr, &a);
//	}

	// Chuoi
	char str[] = "abc123";
	char str1[]="";
	strcpy(str1, str);
	printf("%d\n", strlen(str));
	int length;
	for(length = 0; str[length] != '\0'; ++length);
	printf("%d", length);
	return 0;
}
