#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i, j, k;
	int n;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = 0; j < i; j++)
			printf(" ");
		for (k = 2 * (n - i - 1); k >=0 ; k--)
			printf("*");
		printf("\n");
	}
	for (i = 1; i < n; i++) {
		for (j = n-2; j >i-1; j--)
			printf(" ");
		for (k= 2*(n-i-1); k< 2*n-1;k++)
			printf("*");
		printf("\n");
	}

	return 0; 
}