#include <iostream>

using namespace std;


int main()
{
	int n;
	cin >> n;

	while (true)
	{
		int cin1;
		cin >> cin1;
		if (cin1 == 0) break;
		if (cin1 % n == 0)
			cout << cin1 << " is a multiple of " << n << ".\n";
		else 
			cout << cin1 << " is NOT a multiple of " << n << ".\n";
	}
}