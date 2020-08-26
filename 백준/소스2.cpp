#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstring>
int score[1001];
int main() {
	int cycle; 
	scanf(" %d", &cycle);
	for (int i = 0; i < cycle; i++) {
		int stu; 
		scanf(" %d", &stu);
		double avg = 0.0; 
		int sum = 0;
		for (int j = 0; j < stu; j++) {
			scanf(" %d", &score[j]);
			sum += score[j]; 
		}
		int count = 0;
		avg = (double)sum / stu; 
		for (int j = 0; j < stu; j++) {
			if (avg < score[j]) {
				count++;
			}
		}
		printf("%.3f%%\n", (double)count * 100 / stu);
	}
	return 0; 
}