#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n, cnt = 0;
	string fstr, rstr;
	getline(cin, fstr);
	cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++)
	{
		cin >> rstr;
		rstr += rstr;
		if (rstr.find(fstr) != string::npos) cnt++;
	}
	cout << cnt;
}