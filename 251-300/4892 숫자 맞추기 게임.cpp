//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n0, n1, n2, n3, n4, t = 1;
//	while (1) {
//		bool flag = true; // Â¦¼ö´Â Âü È¦¼ö °ÅÁþ
//		cin >> n0;
//		if (!n0)
//			break;
//		n1 = 3 * n0;
//		if (n1 % 2 == 0)
//			n2 = n1 / 2;
//		else {
//			n2 = (n1+1) / 2;
//			flag = false;
//		}
//		n3 = 3 * n2;
//		n4 = n3 / 9;
//		if (flag == true) {
//			cout << t << ". even " << n4 << "\n";
//		}
//		else {
//			cout << t << ". odd " << n4 << "\n";
//		}
//		t++;
//	}
//}