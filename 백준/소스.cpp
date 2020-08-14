#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
	int num;
	int time[1001];
	cin >> num; 
	for (int i = 0; i < num; i++) {
		cin >> time[i];
	}
	sort(time, time + num);
	
	int sum = 0; 
	for (int i = 0; i < num; i++) {
		for (int j = 0; j <= i; j++) {
			sum += time[j];
		}
	}
	cout << sum; 
}