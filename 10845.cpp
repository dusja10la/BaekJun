#include <iostream>
using namespace std;

class myQueue {
private:
	int start, rear;
	int* arr;
	int length;
public:
	myQueue(int n) {
		start = 0, rear = -1;
		length = n;
		arr = new int[length] {};
	}
	void push(int &x) {
		arr[++rear] = x;
	}
	int pop() {
		if (start > rear) {
			return -1;
		}
		else {
			int a = arr[start];
			arr[start++] = 0;
			return a;
		}
	}
	int size() {
		return (rear - start + 1);
	}
	int empty() {
		if (start > rear) {
			return 1;
		}
		else {
			return 0;
		}
	}
	int front() {
		if (start > rear) {
			return -1;
		}
		else {
			return arr[start];
		}
	}
	int back() {
		if (start > rear) {
			return -1;
		}
		else {
			return arr[rear];
		}
	}
	~myQueue() {
		delete[] arr;
	}
};

int main() {
	int num;
	cin >> num;
	string str1;
	myQueue q1(num);
	for (int i = 0; i < num; i++) {
		cin >> str1;
		if (str1 == "push") {
			int n;
			cin >> n;
			q1.push(n);
		}
		else if (str1 == "pop") {
			cout << q1.pop() << endl;
		}
		else if (str1 == "size") {
			cout << q1.size() << endl;
		}
		else if (str1 == "empty") {
			cout << q1.empty() << endl;
		}
		else if (str1 == "front") {
			cout << q1.front() << endl;
		}
		else if (str1 == "back") {
			cout << q1.back() << endl;
		}
	}
}