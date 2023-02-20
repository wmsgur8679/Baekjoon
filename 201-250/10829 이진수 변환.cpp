#include <iostream>

using namespace std;

void to_bi(long b)
{
	if (b == 0 || b == 1)
		cout << b;
	else {
		to_bi(b / 2);
		cout << b % 2;
	}
}

int main()
{
	long a;
	cin >> a;
	to_bi(a);
}