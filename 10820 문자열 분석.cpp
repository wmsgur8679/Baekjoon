#include <iostream>
#include <string>
#define Max 100

using namespace std;

int main()
{
	string str;
	for (int i = 0; i < Max; i++) {

		int lowc = 0, upc = 0, dic = 0, spc = 0;
		// lowc �ҹ��� upc �빮�� dic ���� spc ����
		getline(cin, str);
		if (str.size() == 0)
			break;

		for (int i = 0; i < str.size(); i++) {
			if (islower(str[i])) lowc++;
			else if (isupper(str[i])) upc++;
			else if (isdigit(str[i])) dic++;
			else if (isspace(str[i])) spc++;
		}
		cout << lowc << " " << upc << " " << dic << " " << spc << endl;
	}

	return 0;
}

