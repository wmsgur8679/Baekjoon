//#include <iostream>
//#define MAX 15
//using namespace std;
//
//int col[MAX];
//int n, total = 0;
//
//bool check(int level)
//{
//	for (int i = 0; i < level; i++)
//		if (col[i] == col[level] || abs(col[level] - col[i]) == level - i) {
//			//cout << col[i];
//			return false;
//		}
//
//	return true;
//}
//
//void nqueen(int x)
//{
//	if (x == n)
//		total++;
//	else {
//		for (int i = 0; i < n; i++) {
//			col[x] = i;
//			if (check(x))
//				nqueen(x + 1);
//		}
//	}
//}
//
//int main() {
//	cin >> n;
//	nqueen(0);
//	cout << total;
//}
