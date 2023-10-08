#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	int num{};
	cin >> num;
	cin.ignore();
	for (int i = 0; i < num; i++) {
		string str1;
		getline(cin, str1);
		int start = 0;
		for (int l = 0; l <= str1.length(); l++) {
			if (l == str1.length() || str1[l] == ' ') {
				stack<char> st;
				for (int k = start; k < l; k++) {
					st.push(str1[k]);
				}
				while (!st.empty()) {
					cout << st.top();
					st.pop();
				}
				start = l + 1;
				cout << " ";
			}
			else {
				continue;
			}
		}
		cout << endl;
	}
}