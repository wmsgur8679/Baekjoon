#include <iostream>

using namespace std;

int ucl(int a, int b)
{
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main()
{
	int n;
	cin >> n;

	int a, b;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;

		cout << (a * b) / ucl(a, b) << " ";
		cout << ucl(a, b) << endl;
	}
}