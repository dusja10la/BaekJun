#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num{}, max{}, sum{};
	cin >> num;
	vector<int> v1(num);
	for (int i = 0; i < num; i++) { // �Է¹��� ���� v1�� �����鼭 �ִ밪 ã��
		cin >> v1[i];
		if (v1[i] > max) {
			max = v1[i];
		}
	}
	for (int i = 0; i < num; i++) {
		sum += v1[i];
	}
	cout << float(sum) * 100 / (max * num); //�Ҽ��� ���̷� ���� sum�� ���ϰ� �����
}