#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double n, w, h, s;
	cin >> n >> w >> h;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s <= w || s <= h || s <= sqrt(w * w + h * h)) {
			cout << "DA" << endl;
		}
		else
			cout << "NE" << endl;
	}
}