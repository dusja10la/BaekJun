#include <iostream>
#include <string>
using namespace std;

int main() {
	int num{};
	cin >> num;
	cin.ignore(); // '\n'무시라고 하기는 하는데 정확히 어떤 역할을 하는 지 모르겠음
	for (int i = 0; i < num; i++) {
		string str1, str2, str3;
		getline(cin, str1); // 띄어쓰기가 포함된 문장(문자열)을 str1에다 넣기
		int start = 0; // 단어의 시작 인덱스
		for (int j = 0; j <= str1.length(); j++) {
			if (str1[j] == ' ' || j == str1.length()) {
				str2 = str1.substr(start, j - start); // start 인덱스부터 (j-start) 길이를 부분문자열로
				start = j + 1; // start를 띄어쓰기 다음 글자의 인덱스로 바꿈
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