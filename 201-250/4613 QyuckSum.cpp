#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
string str;


int main()
{

	while (true)
	{
		int sum = 0, alpha;
		getline(cin, str);
		if (str[0] == '#') break;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == ' ')
				alpha = 0;
			else {
				alpha = str[i];
				alpha -= 64;
			}
			sum += alpha * (i + 1);
		}
		cout << sum << "\n";
	}

	return 0;
}