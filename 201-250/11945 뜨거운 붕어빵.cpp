#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
vector <string> str;
string stri;

int main()
{
	int n, m;
	cin >> n >> m;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		getline(cin, stri);
		str.push_back(stri);
	}

	for (int i = 0; i < n; i++) {
		reverse(str[i].begin(), str[i].end());
		cout << str[i] << endl;
	}

	return 0;
}