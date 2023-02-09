#include <iostream>
#include <string>
#define Max 101

using namespace std;

int main()
{
	string a, c = "CAMBRIDGE";
	
	cin >> a;
	int cnt = 0;
	for (int i = 0; i < a.length(); i++) {
		for (int j = 0; j < c.length(); j++) {
			if (c[j] == a[i]) 
				a[i] = 0;
		}
	}

	for (int i = 0; i < a.length(); i++) {
		if (a[i] != 0) cout << a[i];
	}
}
