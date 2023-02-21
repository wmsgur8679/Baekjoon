#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	double s;
	string str, kg ="kg", lb = "lb", l="l", g= "g";
	cin >> n;
	while (n--)
	{
		cin >> s >> str;
		if (str == kg) {
			printf("%.4f lb \n", s * 2.2046);
		}
		else if (str == lb) {
			printf("%.4f kg\n", s * 0.4536);
		}
		else if (str == l) {
			printf("%.4f g\n", s * 0.2642);
		}
		else if (str == g) {
			printf("%.4f l\n", s * 3.7854);
		}
	}
}