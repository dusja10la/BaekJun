#include <iostream>
using namespace std;

int main() {
	int size, num;
	cin >> size >> num;
	int* arr = new int[size]; // �����Ҵ�
	for (int i = 0; i < size; i++) {
		arr[i] = i + 1;
	}
	int index = 0, count = 0; // count�� �� �� ���ŵǾ����� Ȯ��
	cout << "<";
	while (count != size) { // count�� size�� ������ ����
		for (int i = 0; i < num; i++) { 
			if (arr[(index + i) % size] == 0) { // %�� index + i�� size���� Ŀ���� �� ����
				index++;
				i--; // for���� �� �� ����Ǿ��� �� �ǵ�����
				continue;
			}
			else {
				if (i == num - 1) {
					index = (index + i) % size;
					break;
				}
				else {
					continue;
				}
			}
		}
		cout << arr[index];
		count++;
		if (count < size) {
			cout << ", ";
		}
		arr[index] = 0;
		index = (index + 1) % size;
	}
	cout << ">";
	delete[] arr; // �����Ҵ� ����
}