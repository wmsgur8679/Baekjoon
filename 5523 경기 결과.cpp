#include <iostream>

using namespace std;

int main()
{
	int N, cnt1 = 0, cnt2 = 0;
	cin >> N;

		for (int i = 0; i < N; i++)
		{
			int a = 0, b = 0;
			cin >> a >> b;
			if (a == b) {

			}
			else if (a > b)
				cnt1++;
			else if (a < b)
				cnt2++;
		}

		cout << cnt1 << " " << cnt2;

	
}