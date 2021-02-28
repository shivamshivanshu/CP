#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


const int N = 1e5 + 5, M = 2e5 + 5;
int n, m;
vector<int> g[N];
vector<int> visited(N, 0);
vector<int> conncected;
void bfs(int s) {
	visited[s] = 1;
	queue<int> q;
	q.push(s);
	while (!q.empty()) {
		int from = q.front();
		q.pop();
		for (auto to : g[from]) {
			if (!visited[to]) {
				visited[to] = 1;
				q.push(to);
			}
		}
	}
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
			conncected.emplace_back(i);
			bfs(i);
		}
	}
	cout << conncected.size() - 1 << endl;
	if ((int)conncected.size() == 1)	return;

	for (int i = 1; i < (int)conncected.size(); i++) {
		cout << conncected[0] + 1 << " " << conncected[i] + 1 << endl;
	}
}
int main() {
	std::ios_base::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
	int test_cases(1);
	//cin >> test_cases;
	while (test_cases--)	solve();
}