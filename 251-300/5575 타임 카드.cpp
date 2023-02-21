#include <iostream>

using namespace std;

int main()
{
	int time[3][6];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			cin >> time[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {
		int wtime = (time[i][3] * 3600 + time[i][4] * 60 + time[i][5]) - (time[i][0] * 3600 + time[i][1] * 60 + time[i][2]);
		cout << wtime / 3600 << " ";
		wtime %= 3600;
		cout << wtime / 60 << " ";
		wtime %= 60;
		cout << wtime << "\n";	
	}
}