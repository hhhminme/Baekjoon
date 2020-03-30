#include<stdio.h>
#define num 5
int main(void) {
	int list[num];
	int sum = 0;
	for (int i = 0; i < num; i++) {
		scanf("%d", &list[i]);
		if (list[i] < 40){
			list[i] = 40; 
		}
		sum = sum + list[i];
		
	}
	printf("%d", sum/num);
	return 0;

}