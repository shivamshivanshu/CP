#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


const int N = 1e5 + 5, M = 2e5 + 5;
int n, m;
vector<int> g[N];
vector<int> visited(N, 0);
vector<int> color(N, -1);
int bfs(int s) {
	queue<int> q;
	visited[s] = 0;
	color[s] = 0;
	q.push(s);
	while (!q.empty()) {
		int from = q.front();
		q.pop();
		for (auto to : g[from]) {
			if (!visited[to]) {
				visited[to] = 1;
				color[to] = 1 - color[from];
				q.push(to);
			}
			else if (color[to] == 1 - color[from])	continue;
			else return 0;
		}
	}
	return 1;
}
void solve() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		u--, v--;
		g[u].emplace_back(v);
		g[v].emplace_back(u);
	}
	for (int i = 0; i < n; i++) {
		if (not visited[i]) {
			int ok = bfs(i);
			if (!ok) {
				cout << "IMPOSSIBLE\n";
				return;
			}
		}
	}
	for (int i = 0; i < n; i++)	cout << color[i] + 1 << " ";
	cout << endl;
}
int main() {
	std::ios_base::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
	int test_cases(1);
	//cin >> test_cases;
	while (test_cases--)	solve();
}