#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


using namespace std;

int main(int argc, char* argv[])
{
	string str;
	string temp;
	vector<string> v;
	cin >> str;

	int len = str.length();
	for (int i = 0; i < len; i++) {
		temp = str.substr(i, len-i);
		v.push_back(temp);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
}