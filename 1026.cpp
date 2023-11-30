#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int A[51], B[51];
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> B[i];
	}
	for (int i = 0; i < N - 1; i++) {
		for (int j = i; j < N; j++) {
			if (A[i] > A[j]) {
				int x = A[i], y = A[j], z;
				z = y;
				A[j] = x;
				A[i] = z;
			}
			if (B[i] < B[j]) {
				int x = B[i], y = B[j], z;
				z = y;
				B[j] = x;
				B[i] = z;
			}
		}
	}
	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += A[i] * B[i];
	}
	cout << sum;
}