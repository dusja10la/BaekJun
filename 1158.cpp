#include <iostream>
using namespace std;

int main() {
	int size, num;
	cin >> size >> num;
	int* arr = new int[size]; // 동적할당
	for (int i = 0; i < size; i++) {
		arr[i] = i + 1;
	}
	int index = 0, count = 0; // count는 몇 번 제거되었는지 확인
	cout << "<";
	while (count != size) { // count가 size와 같으면 종료
		for (int i = 0; i < num; i++) { 
			if (arr[(index + i) % size] == 0) { // %는 index + i가 size보다 커지는 걸 방지
				index++;
				i--; // for문이 한 번 실행되었던 거 되돌리기
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
	delete[] arr; // 동적할당 제거
}