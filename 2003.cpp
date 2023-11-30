#include <iostream>
using namespace std;

int main() {
	int N;
	unsigned int M;
	int arr[10001];
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int count = 0;
	for (int i = 0; i < N; i++) {
		int sum = 0;
		for (int j = i; j < N; j++) {
			sum += arr[j];
			if (sum == M) {
				count++;
				break;
			}
			if (sum > M) {
				break;
			}
		}
	}
	cout << count;
}