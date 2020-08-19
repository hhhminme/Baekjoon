#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int stack[10000]; 
int main() {
	int num; 
	int topNum = -1; 
	char str[BUFSIZ]; 
	int i,X; 
	
	cin >> num; 
	for (i = 0; i <= num; i++) {
		cin >> str; 
		if (strcmp(str, "push")==0) {
			cin >> X;
			stack[++topNum] = X;
			
		}
		if (strcmp(str, "pop")==0) {
			if (topNum < 0) {
				cout << -1 << '\n';
			}
			else {
				cout << stack[topNum - 1] << '\n';
				topNum--;
			}
			
		}
		if (strcmp(str, "size")==0) {
			cout << topNum+1 << '\n';
		}
		if (strcmp(str, "empty")==0) {
			if (topNum < 0) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		if(strcmp(str, "top")) {
			if (topNum < 0){
				cout << -1 << '\n';
			}
			else {
				cout << stack[topNum] << '\n';
			}
		}
	}
}