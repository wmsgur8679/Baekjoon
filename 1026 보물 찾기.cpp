#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	int num , N;
	vector<int> a;
	vector<int> b;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		a.push_back(num);
	}
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		b.push_back(num);
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end(), greater<>());
	int ans = 0;
	for (int i = 0; i < N; i++) ans += a[i] * b[i];

	cout << ans;
}
