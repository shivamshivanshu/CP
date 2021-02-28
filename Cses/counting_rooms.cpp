#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


/* Global variable */
const int N = 1e3 + 5, M = 1e3 + 5;
int n, m;
char arr[N][M];
vector<int> dx = { -1, 0, 0, 1};
vector<int> dy = {0, 1, -1, 0};
/* Global varible */
bool e(int x, int y) {
	if (x < n and y < m and x >= 0 and y >= 0 and arr[x][y] == '.')	return true;
	return false;
}
void dfs(int x, int y) {
	arr[x][y] = '#';
	if (e(x - 1, y))	dfs(x - 1, y);
	if (e(x + 1, y))	dfs(x + 1, y);
	if (e(x, y - 1))	dfs(x, y - 1);
	if (e(x, y + 1))	dfs(x, y + 1);
}
void solve() {
	int cc = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (e(i, j)) {
				dfs(i, j);
				cc++;
			}
		}
	}
	cout << cc << endl;

}
int main() {
	std::ios_base::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
	int test_cases(1);
	//cin >> test_cases;
	while (test_cases--)	solve();
}