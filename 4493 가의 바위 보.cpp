#include <iostream>

using namespace std;

int main()
{
	int n, a;
	cin >> n;
	char p1, p2;

	for (int i = 0; i < n; i++) {
		int p1w = 0, p2w = 0;
		cin >> a;

		for (int j = 0; j < a; j++) {
			cin >> p1 >> p2;

			if (p1 == 'R') {
				if (p2 == 'R') {
					p1w++;
					p2w++;
				}
				else if (p2 == 'S') {
					p1w++;
				}
				if (p2 == 'P') {
					p2w++;
				}
			}
			else if (p1 == 'S') {
				if (p2 == 'R') {
					p2w++;
				}
				else if (p2 == 'S') {
					p1w++;
					p2w++;
				}
				if (p2 == 'P') {
					p1w++;
				}
			}
			else if (p1 == 'P') {
				if (p2 == 'R') {
					p1w++;
				}
				else if (p2 == 'S') {
					p2w++;
				}
				if (p2 == 'P') {
					p1w++;
					p2w++;
				}

			}
		}
		if (p1w > p2w) cout << "Player 1" << endl;
		else if (p2w > p1w) cout << "Player 2" << endl;
		else if (p1w == p2w) cout << "TIE" << endl;
	}
}