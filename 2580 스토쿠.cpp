#include <iostream>
#include <utility>
#include <vector>

using namespace std;
int gameborad[9][9];
vector<pair<int, int>> points;
int cnt = 0;
bool found = false;

bool check(pair<int, int> p)
{
	int square_x = p.first / 3;
	int square_y = p.second / 3;
	for (int i = 0; i < 9; i++) {
		if (gameborad[p.first][i] == gameborad[p.first][p.second] && i != p.second)
			return false;
		if (gameborad[i][p.second] == gameborad[p.first][p.second] && i != p.first)
			return false;
	}
	for(int i = 3 *square_x; i < 3 * square_x+3; i++)
		for (int j = 3 * square_y; j < 3 * square_y + 3; j++) {
			if (gameborad[i][j] == gameborad[p.first][p.second]) {
				if (i != p.first && j != p.second)
					return false;
			}
		}
	return true;
}

void sudoku(int N) {
	if (N == cnt)
	{
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++)
				cout << gameborad[i][j] << ' ';
			cout << '\n';
		}
		found = true;
		return;
	}
	for (int j = 1; j <= 9; j++)
	{
		gameborad[points[N].first][points[N].second] = j;
		if (check(points[N]))
			sudoku(N + 1);
		if (found)
			return;
	}
	gameborad[points[N].first][points[N].second] = 0;
	return;
}


int main() 
{
	pair<int, int> point;
	for(int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++) {
			cin >> gameborad[i][j];
			if (gameborad[i][j] == 0) {
				cnt++;
				point.first = i;
				point.second = j;
				points.push_back(point);
			}
		}
	sudoku(0);

}