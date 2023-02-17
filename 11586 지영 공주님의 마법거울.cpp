//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//vector <string> vstr;
//
//int main()
//{
//	string str;
//	int n, flag;
//	cin >> n;
//	cin.ignore();
//
//	for (int i = 0; i < n; i++)
//	{
//		getline(cin, str);
//		vstr.push_back(str);
//	}
//
//	cin >> flag;
//	if (flag == 1) {
//		for (int i = 0; i < n; i++) {
//			cout << vstr[i] << endl;
//		}
//	}
//	else if (flag == 2)
//	{
//		for (int i = 0; i < n; i++) {
//			reverse(vstr[i].begin(), vstr[i].end());
//			cout << vstr[i] << endl;
//		}
//	}
//	else
//	{
//		for (int i = n - 1; i >= 0; i--) {
//			cout << vstr[i] << endl;
//		}
//	}
//}