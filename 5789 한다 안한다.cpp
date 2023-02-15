#include <iostream>

using namespace std;

int main()
{
	int N;
	string input;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> input;
		int k = input.size();
		k /= 2;
		if (input[k-1] == input[k]) {
			cout << "Do-it\n";
		}
		else
			cout << "Do-it-Not\n";
	}
}