#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int n, x;
	queue<int> Q;
	string op;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> op;
		if (op == "push") {
			cin >> x;
			Q.push(x);
		}
		else if (op == "pop") {
			if (Q.empty())
				cout << -1 << endl;
			else {
				cout << Q.front() << endl;
				Q.pop();
			}
		}
		else if (op == "size") {
			cout << Q.size() << endl;
		}
		else if (op == "front") {
			if (Q.empty())
				cout << -1 << endl;
			else cout << Q.front() << endl;
		}
		else if (op == "empty") {
			cout << Q.empty() << endl;
		}
		else if (op == "back") {
			if (Q.empty())
				cout << -1 << endl;
			else cout << Q.back() << endl;
		}
	}
	return 0;
}