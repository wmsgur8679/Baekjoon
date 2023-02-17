//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//int main()
//{
//	string str;
//	int h = 0, s = 0;
//	getline(cin, str);
//	for (int i = 0; i < str.length() - 2; i++)
//	{
//		if (str[i] == ':' && str[i + 1] == '-') {
//			if (str[i + 2] == ')')
//				h++;
//			else
//				s++;
//		}
//	}
//
//	if (h == 0 && s == 0)
//		cout << "none\n";
//	else if (h == s)
//		cout << "unsure\n";
//	else
//		cout << (h > s ? "happy" : "sad") << endl;
//}