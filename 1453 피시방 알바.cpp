#include <iostream>

using namespace std;

int main()
{
	int n, cnt = 0;
	bool arr[101] = { 0, };
	for (int i = 1; i <= 100; i++) {
		arr[i] = true;
	}

	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (arr[a] == true) {
			arr[a] = false;
		}
		else cnt++;
	}
	cout << cnt;
}