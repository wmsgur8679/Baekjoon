#include <iostream>
#include <string>

using namespace std;

int main()
{
	string fbi[6];
	string ans = "";
	for (int i = 1; i <= 5; i++) {
		cin >> fbi[i];
		if (fbi[i].find("FBI") == string::npos)
			continue;
		else
			ans += to_string(i);
	}
	if (ans.size() == 0)
		cout << "HE GOT AWAY!" << endl;
	else {
		for (int i = 0; i < ans.size(); i++)
			cout << ans[i] << " ";
	}
}