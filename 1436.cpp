#include <iostream>
#include <string>
using namespace std;

int main() {
	int num;
	cin >> num;
	
	int count = 0;
	for (int i = 666; i < 3000000; i++) {
		if (to_string(i).find("666") != string::npos) {
			count++;
		}
		if (count == num) {
			cout << i;
			break;
		}
	}
}