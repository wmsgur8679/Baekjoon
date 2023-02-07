#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	string str;

	for (int i = 0; i < t; i++) {
		cin >> str;

		int cnt1 = 0;
		int cnt2 = 0;

		int arr[10] = { 0, };

		for (int j = 0; j < str.length(); j++) {
			cnt1 = str[j]-'0';
			arr[cnt1]++;
		}

		for (int k = 0; k <= 9; k++) {
			if (arr[k] != 0) {
				cnt2++;
			}
		}
		cout << cnt2 << endl;
	}
	return 0;
}