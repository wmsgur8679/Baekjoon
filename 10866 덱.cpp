#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
	deque<int> DQ;
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if (str == "push_front") {
			int x;
			cin >> x;
			DQ.push_front(x);
		}
		else if (str == "push_back") {
			int x;
			cin >> x;
			DQ.push_back(x);
		}
		else if (str == "pop_front") {
			if (!DQ.empty()) {
				cout << DQ.front() << endl;
				DQ.pop_front();
			}
			else cout << "-1" << endl;
		}
		else if (str == "pop_back") {
			if (!DQ.empty()) {
				cout << DQ.back() << endl;
				DQ.pop_back();
			}
			else cout << -1 << endl;
		}
		else if (str == "size") {
			cout << DQ.size() << endl;
		}
		else if (str == "empty") {
			cout << DQ.empty() << endl;
		} 
		else if (str == "front") {
			if (!DQ.empty())
				cout << DQ.front() << endl;
			else cout << -1 << endl;
		}
		else if (str == "back") {
			if (!DQ.empty()) {
				cout << DQ.back() << endl;
			}
			else
				cout << -1 << endl;
		}
	}
	return 0;
}