#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a1 = 0, a2 = 0;
	string str;
	cin >> str;
	int len = str.length();

	for (int i = 0; i < len; i++) {
		if (str.substr(i, 3) == "JOI") a1++;
		else if (str.substr(i, 3) == "IOI") a2++;
	}

	cout << a1 << endl << a2;
}