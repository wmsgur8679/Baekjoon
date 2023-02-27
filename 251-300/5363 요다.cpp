//#include <iostream>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int test;
//	cin >> test;
//	cin.ignore();
//
//	for (int i = 0; i < test; i++) {
//		string str;
//		getline(cin, str);
//
//		vector<string> vec;
//
//		stringstream ss;
//		ss.str(str);
//
//		string word;
//		while (ss >> word) {
//			vec.push_back(word);
//		}
//
//		for (int i = 2; i < vec.size(); i++) {
//			cout << vec[i] << " ";
//		}
//		cout << vec[0] << " " << vec[1] << "\n";
//	}
//	return 0;
//}