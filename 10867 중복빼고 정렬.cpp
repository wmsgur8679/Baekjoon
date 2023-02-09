#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	vector<int> a;

	cin >> n;
	int temp;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		a.push_back(temp);
	}

	sort(a.begin(), a.end());

	a.erase(unique(a.begin(), a.end()), a.end());

	for (auto x : a)
		cout << x << " ";

	return 0;
}