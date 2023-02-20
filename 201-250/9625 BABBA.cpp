#include <iostream>

using namespace std;

int main()
{
	int a[46];
	int b[46];
	int n;
	a[1] = 0;
	a[2] = 1;
	b[1] = 1;
	b[2] = 1;
	cin >> n;
	for (int i = 2; i < n + 1; i++)
	{
		a[i] = b[i - 1];
		b[i] = a[i - 1] + b[i - 1];
	}
	cout << a[n] << " " << b[n];
}