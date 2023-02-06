//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int M, D;
//	cin >> M>> D;
//	int totalDay = 0;
//	int MonthDays[13] = {0, 31, 28 ,31, 30, 30, 30, 31,31,30,31,30,31 };
//	totalDay += D;
//	for (int i = 1; i < M; i++) {
//		totalDay += MonthDays[i];
//	}
//
//		switch (totalDay % 7)
//	{
//	case 0:
//		cout << "Wednesday";
//		break;
//	case 1:
//		cout << "Thursday";
//		break;
//	case 2:
//		cout << "Friday";
//		break;
//	case 3:
//		cout << "Saturday";
//		break;
//	case 4:
//		cout << "Sunday";
//		break;
//	case 5:
//		cout << "Monday";
//		break;
//	case 6:
//		cout << "Tuesday";
//		break;
//	}
//}
