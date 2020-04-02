#include <iostream>
using namespace std;
int main(void) {
	int i = 0;
	int index; 
	int big = 0;
	int arr[9];

	for (i = 0; i < 9; i++) {
		cin >> arr[i];
		if (arr[i] > big) {
			big = arr[i];
			index = i;
		}
	}

	cout << big << "\n" << index+1;
	return 0;
}