#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int t, c, Quarter, Dime, Nickel, Penny;
	cin >> t;

	for (int i = 0; i < t; i++) {
		Quarter = 0, Dime = 0, Nickel = 0, Penny = 0;
		cin >> c;
		Quarter = c / 25, c -= Quarter * 25;
		Dime = c / 10, c -= Dime * 10;
		Nickel = c / 5, c -= Nickel * 5;
		Penny = c;
		printf("%d %d %d %d\n", Quarter, Nickel, Dime, Penny);
	}
	return 0;
}