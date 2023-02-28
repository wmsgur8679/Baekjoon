//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <sstream>
//
//using namespace std;
//
//int main()
//{
//	string str, ans;
//	stringstream ss;
//	int N;
//	vector <int> Bstudent;
//	cin >> N;
//	cin.ignore();
//	for (int i = 1; i <= N; i++)
//	{
//		ss.clear();
//		bool check = true;
//		int j = 1;
//		getline(cin, str);
//		ss.str(str);
//		while(ss >> ans){
//			if (((j - 1) % 5 + 1 != stoi(ans))) {
//				check = false;
//			}
//			j++;
//		}
//		if (check == true) Bstudent.push_back(i);
//
//	}
//	for (int i = 0; i < Bstudent.size(); i++) {
//		cout << Bstudent[i] << "\n";
//	}
//}