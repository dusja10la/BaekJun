#include <iostream>
#include <vector>
using namespace std;

class myStack {
private:
	vector<int> v1;
public: // myStak 멤버함수는 vector 클래스의 멤버함수 이용
	void push(int& x) {
		v1.push_back(x);
	}
	int pop() {
		if (v1.empty()) {
			return -1;
		}
		else {
			int x = v1.back();
			v1.pop_back();
			return x;
		}
	}
	int size() {
		return v1.size();
	}
	int empty() {
		if (v1.empty()) {
			return 1;
		}
		else {
			return 0;
		}
	}
	int top() {
		if (v1.empty()) {
			return -1;
		}
		else {
			return v1.back();
		}
	}
};

int main() {
	int num{};
	cin >> num;
	myStack s1; // 객체 생성
	for (int i = 0; i < num; i++) {
		string str1;
		cin >> str1;
		if (str1 == "push") {
			int n;
			cin >> n;
			s1.push(n);
		}
		else if (str1 == "pop") {
			cout << s1.pop() << endl;
		}
		else if (str1 == "size") {
			cout << s1.size() << endl;
		}
		else if (str1 == "empty") {
			cout << s1.empty() << endl;
		}
		else if (str1 == "top") {
			cout << s1.top() << endl;
		}
	}
}