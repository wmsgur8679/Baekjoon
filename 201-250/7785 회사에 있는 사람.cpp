#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string name, status;
	set <string> str;
	for (int i = 0; i < n; i++) {
		cin >> name >> status;
		if (status == "enter")
			str.insert(name);
		else
			str.erase(name);
	}

	for (auto iter = str.rbegin(); iter != str.rend(); iter++) {
		cout << *iter << "\n";
	}

	return 0;
}