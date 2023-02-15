#include <iostream>

using namespace std;

int main()
{
	int L, A, B, C, D, ans1, ans2;
	cin >> L >> A >> B >> C >> D;
	ans1 = A / C;
	A %= C;
	if (A > 0)ans1++;

	ans2 = B / D;
	B %= D;
	if (B > 0)ans2++;
	printf("%d\n", ans1 < ans2 ? L - ans2 : L - ans1);
}