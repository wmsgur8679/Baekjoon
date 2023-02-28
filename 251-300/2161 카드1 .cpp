#include <iostream>
#include <deque>
using namespace std;

int n;
deque<int> q;
int main()
{
	cin >> n;
	int temp = 0;
	for (int i = 1; i <= n; i++)
		q.push_back(i);

	for (int j = 0; j < n - 1; j++) {
		cout << q.front() << " ";
		q.pop_front();
		q.push_back(q.front());
		q.pop_front();
	}
	cout << q.front() << "\n";
	
}