#include <iostream>
#include <string>

using namespace std;

int main()
{
	while (true)
	{
		int one = 0, len;
		string str;
		getline(cin , str);
		if (str == "#") break;

		len = str.length();
		for (int i = 0; i < len; i++)
			if (str[i] == '1')
				one++;

		if (str[len - 1] == 'e')
		{
			if (one % 2 == 0)
				str[len - 1] = '0';
			else
				str[len - 1] = '1';
		}
		else
		{
			if (one % 2 == 0)
				str[len - 1] = '1';
			else
				str[len - 1] = '0';
		}
		cout << str << endl;

	}
}