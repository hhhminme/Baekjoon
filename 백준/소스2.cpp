#include <iostream>
using namespace std; 
int main(void) {
	int card_num, sum;
	int max;
	cin >> card_num >> max;
	int arr[101];
	for (int i = 0; i < card_num; i++) {
		cin >> arr[i];
	}
	
	for (int i = 0; i < card_num; i++) {
		for (int j = 0; j < card_num; j++) {
			for (int k = 0; k < card_num; k++) {
				sum = arr[i] + arr[j] + arr[k];
				if (sum < max && max - sum > 0) {
					max = sum;
				}
			}
		}
	}
	cout << max << endl;
	return 0; 
}