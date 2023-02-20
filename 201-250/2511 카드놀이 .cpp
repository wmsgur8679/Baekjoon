#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	char lastwin = 'D';
	int A[10], B[10], AP = 0, BP =0, DP =0;
	for (int i = 0; i < 10; i++) {
		cin >> A[i];
	}

	for (int i = 0; i < 10; i++) {
		cin >> B[i];
	}

	for (int i = 0; i < 10; i++) {
		if (A[i] > B[i]) {
			AP += 3;
			lastwin = 'A';
		}
		else if (A[i] < B[i]) {
			BP += 3;
			lastwin = 'B';
		}
		else
			DP += 3, AP += 1, BP += 1;
	}
	if (AP > BP)
		cout << AP << " " << BP << "\nA";
	else if (BP < AP)
		cout << AP << " " << BP << "\nB";
	else
		cout << AP << " " << BP << "\n" << lastwin;
}