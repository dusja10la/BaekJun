#include <iostream>
using namespace std;

int main() {
	int forward, back, length;
	cin >> forward >> back >> length;
	if ((length - forward) % (forward - back)) { // �������� ����� ��� �Ϸ縦 �� ���� �ϴ� 1 ���ϱ�
		cout << (length - forward) / (forward - back) + 2;
	}
	else {
		cout << (length - forward) / (forward - back) + 1;
	}
}