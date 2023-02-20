#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int ans = 0;
		int n, k, candy;
		cin >> n >> k;
		while (n--)
		{
			cin >> candy;
			ans += candy / k;


		}
		cout << ans << endl;
	}
}