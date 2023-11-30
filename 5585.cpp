#include <iostream>
using namespace std;

int main() {
	int money;
	cin >> money;
	money = 1000 - money;
	int coin[6] = { 500, 100, 50, 10, 5, 1 };
	int coin_count = 0;
	for (int i = 0; i < 6; i++) {
		coin_count += money / coin[i];
		money = money % coin[i];
	}
	cout << coin_count;
}