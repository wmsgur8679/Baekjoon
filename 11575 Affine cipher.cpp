#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	int a, b, x;
	string str;

	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		cin >> str;

		int len = str.length();

		for (int j = 0; j < len; j++) {
			x = str[j] - 65;
			str[j] = ((a * x + b) % 26) + 65;
		}
		cout << str << endl;
	}
}