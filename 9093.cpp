#include <iostream>
#include <string>
using namespace std;

int main() {
	int num{};
	cin >> num;
	cin.ignore(); // '\n'���ö�� �ϱ�� �ϴµ� ��Ȯ�� � ������ �ϴ� �� �𸣰���
	for (int i = 0; i < num; i++) {
		string str1, str2, str3;
		getline(cin, str1); // ���Ⱑ ���Ե� ����(���ڿ�)�� str1���� �ֱ�
		int start = 0; // �ܾ��� ���� �ε���
		for (int j = 0; j <= str1.length(); j++) {
			if (str1[j] == ' ' || j == str1.length()) {
				str2 = str1.substr(start, j - start); // start �ε������� (j-start) ���̸� �κй��ڿ���
				start = j + 1; // start�� ���� ���� ������ �ε����� �ٲ�
				for (int k = str2.length() - 1; k >= 0; k--) {
					str3 += str2[k];
				}
				str3 += ' ';
			}
			else {
				continue;
			}
		}
		cout << str3 << endl;
	}
}