#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1;
	cin >> s1;
	int sum{}, count{};
	for (int i = 0; i < s1.length() - 1; i++) {
		if (s1[i] == '(') {
			if (s1[i + 1] == ')') {
				sum += count;
			}
			else {
				count++;
			}
		}
		else {
			if (s1[i + 1] == ')') {
				sum++;
				count--;
			}
		}
	}
	cout << sum;
}