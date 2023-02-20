#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	string str, tmp;
	while (t--)
	{
		int sum;
		bool flag = true;
		getline(cin, str);
		tmp = str;
		reverse(str.begin(), str.end());
		sum = stoi(tmp) + stoi(str);
		tmp = to_string(sum);
		for (int i = 0; i < tmp.length() / 2; i++) {
			if (tmp[i] != tmp[tmp.length() - 1 - i]) {
				flag = false;
			}

		}
		if (flag)
			cout << "Yes\n";
		else
			cout << "No\n";
	}

	return 0;
}

