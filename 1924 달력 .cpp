//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int month, date;
//	cin >> month >> date;
//
//	int DayMonth[12] = { 31, 28, 31, 30 ,31, 30, 31, 31, 30 ,31 ,30 ,31 };
//	int Day = 0;
//	Day = date;
//	for (int i = 0; i < (month - 1); i++) {
//		Day += DayMonth[i];
//	}
//	
//	switch (Day % 7)
//	{
//	case 0:
//		cout << "SUN";
//		break;
//	case 1:
//		cout << "MON";
//		break;
//	case 2:
//		cout << "TUE";
//		break;
//	case 3:
//		cout << "WED";
//		break;
//	case 4:
//		cout << "THU";
//		break;
//	case 5:
//		cout << "FRI";
//		break;
//	case 6:
//		cout << "SAT";
//		break;
//	}
//}