#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	string str1, str2;
	cin >> str1 >> str2;

	int cnt1 = 0, cnt2 = 0;

	for (int i = 0; i < str1.length(); i++) {
		if (str1[i] == 'a') {
			cnt1++;
		}
	}

	for (int i = 0; i < str2.length(); i++) {
		if (str2[i] == 'a') {
			cnt2++;
		}
	}
	if (cnt1 >= cnt2 || str1.length() == str2.length()) {
		cout << "go";
	}
	else {
		cout << "no";
	}
}