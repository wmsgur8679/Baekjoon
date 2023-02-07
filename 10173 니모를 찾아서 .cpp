#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	while (true) {
		getline(cin , str);
		if (str == "EOI") break;
		transform(str.begin(), str.end(), str.begin(), ::towlower);
		if (str.find("nemo") == string::npos)
			cout << "Missing" << endl;
		else
			cout << "Found" << endl;
			
	}
}