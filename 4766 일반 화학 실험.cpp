#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	double temp = 0, c;
	while (true)
	{
		cin >> c;
		if (c == 999) break;
		else if (temp != 0) {
			printf("%.2f\n", c - temp );
			temp = c;
		}
		else {
			temp = c;
		}
	}
}