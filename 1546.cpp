#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num{}, max{}, sum{};
	cin >> num;
	vector<int> v1(num);
	for (int i = 0; i < num; i++) { // 입력받은 수를 v1에 넣으면서 최대값 찾기
		cin >> v1[i];
		if (v1[i] > max) {
			max = v1[i];
		}
	}
	for (int i = 0; i < num; i++) {
		sum += v1[i];
	}
	cout << float(sum) * 100 / (max * num); //소수점 차이로 먼저 sum을 구하고 계산함
}