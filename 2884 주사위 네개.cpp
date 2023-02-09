#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int calc(int a[4])
{
	int c = 0, ans = 0, t, temp;
	int b[7];

	for (int i = 0; i < 7; i++)
		b[i] = 0;

	for (int j = 0; j < 4; j++)
		b[a[j]]++;

	for (int k = 0; k < 7; k++) {
		if (b[k] == 4) ans = 50000 + k * 5000;
		if (b[k] == 3) ans = 10000 + k * 1000;

		if (ans != 0) return ans;
	}

	for (int i = 0; i < 7; i++)
	{
		if (b[i] == 2)
		{
			c++;
			if (c == 1) ans = 1000 + i * 100;
			if (c == 2) ans = 2000 + t * 500 + i * 500;
			t = i;
		}
	}

	if (ans == 0)
	{
		sort(a, a + 4);
		ans = a[3] * 100;
	}

	return ans;
}

int main()
{
	int n, mnum = 0;
	vector<int> v;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		int a[4];

		for (int j = 0; j < 4; j++) {
			cin >> a[j];
		}
		v.push_back(calc(a));
	}
	for (int i = 0; i < n; i++)
		mnum = max(mnum, v[i]);

	cout << mnum << endl;
}