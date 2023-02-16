#include <iostream>

double AP = 350.34;
double BP = 230.90;
double CP = 190.55;
double DP = 125.30;
double EP = 180.90;

using namespace std;



int main()
{
	int T;
	cin >> T;
	while (T--) {
		int A, B, C, D, E;
		double Price;
		cin >> A >> B >> C >> D >> E;
		Price = A * AP + B * BP + CP * C + DP * D + EP * E;
		printf("$%.2f\n", Price);
	}
}