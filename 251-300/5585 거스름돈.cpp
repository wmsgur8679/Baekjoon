#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> m = { 500, 100, 50, 10, 5, 1 };
	int money, cnt =0;
	cin >> money;
	money = 1000 - money;

	for (int i = 0; i < 6; i++) {
		for (;;) {
			if (money >= m[i]) {
				money -= m[i];
				cnt++;
			}
			else break;
		}
	}
	cout << cnt;
	
}