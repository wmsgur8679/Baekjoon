#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	double pay;
	for (int i = 0; i < N; i++) {
		cin >> pay;
		printf("$%.2f\n", pay * 0.8);
	}
}