#include <iostream>
#include <vector>

using namespace std;

int cnt_alphabet[26];
char alphabet[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

int main()
{
	cin.tie(0);
	char c;
	while (cin >> c)
	{
		if ('a' <= c && c <= 'z') {
			cnt_alphabet[c - 'a']++;
		}
	}

	int max_index = 0;
	for (int i = 0; i < 26; i++) {
		if (cnt_alphabet[i] > max_index) {
			max_index = cnt_alphabet[i];
		}
	}
	for (int i = 0; i < 26; i++) {
		if (max_index == cnt_alphabet[i])
			cout << alphabet[i];
	}
}