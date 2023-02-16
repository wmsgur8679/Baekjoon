#include <iostream>

using namespace std;

long long gcd(long long  a, long long b)
{
	if (a <= b) {
		long long mod = b % a;
		while (mod) {
			b = a;
			a = mod;
			mod = b % a;
		} return a;
	}
	else if (a > b) {
		long long mod = a % b;
		while (mod) {
			a = b;
			b = mod;
			mod = a % b;
		} return b;
	}
}

long long  lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long  a, b;
		cin >> a >> b;
		cout << lcm(a, b) << endl;
	}
}