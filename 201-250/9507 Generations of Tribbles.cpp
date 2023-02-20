#include <iostream>
#include <vector>

using namespace std;

int T;
int n;



int main()
{
	long long s[69];
	s[0] = 1;
	s[1] = 1;
	s[2] = 2;
	s[3] = 4;
	for (int i = 4; i < 68; i++) {
		s[i] = s[i - 1] + s[i - 2] + s[i - 3] + s[i - 4];
	}
	cin >> T;
	while (T--) {
		cin >> n;
		cout << s[n] << "\n";
	}
	return 0;
}