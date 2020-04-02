#include <iostream>
using namespace std; 
int A[1000001];
int MIN = -1000001;
int MAX = 1000001; 
int N; 

int main() {
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
		if (MIN < A[i]) MIN = A[i];
		if (MAX > A[i]) MAX = A[i];
	}
	cout << MAX << ' ' << MIN;

	return 0; 
}