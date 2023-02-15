#include <iostream>

using namespace std;

int main()
{
	int N, a, b;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int c = 0;
		cin >> a;
		cout << "Pairs for " << a << ":";
		for (int j = 0; j < a; j++) {
			for (int k = j + 1; k < a; k++) {
				if (c == 0 && j + k == a) {
					c = 1;
					cout << " " << j << " " << k;
				}
				else if (j + k == a)
					cout << ", " << j << " " << k;
			}
		}
		cout << endl;
	}
}