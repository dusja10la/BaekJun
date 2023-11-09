#include <iostream>
using namespace std;

int main() {
	int forward, back, length;
	cin >> forward >> back >> length;
	if ((length - forward) % (forward - back)) { // 나머지가 생기는 경우 하루를 더 가야 하니 1 더하기
		cout << (length - forward) / (forward - back) + 2;
	}
	else {
		cout << (length - forward) / (forward - back) + 1;
	}
}