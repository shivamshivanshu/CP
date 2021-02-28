#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


const int N = 1e5 + 5, M = 2e5 + 5;
int n, m;
vector<int> g[N];
vector<int> visited(N, 0);
vector<int> parent(N, -1);
int bfs(int s) {
	queue<int> q;
	visited[s] = 0;
	q.push(s);
	while (!q.empty()) {
		int from = q.front();
		q.pop();
		for (auto to : g[from]) {
			if (!visited[to]) {
				visited[to] = 1;
				parent[to] = from;
				q.push(to);
			}
		}
	}
	return 0;
}
vector<int> ans;
void dfs(int u, int p = -1) {
	visited[u] = 1;
	parent[u] = p;
	for (int v : g[u]) {
		if (v == p)	continue;
		if (not visited[v]) {
			dfs(v, u);
		}
		else {
			int u2 = u;
			while (u ^ v) {
				ans.emplace_back(u);
				u = parent[u];
			}
			ans.emplace_back(v);
			ans.emplace_back(u2);
			cout << ans.size() << endl;
			for (auto i : ans)	cout << i + 1 << " ";
			exit(0);
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
		if (not visited[i])	dfs(i);
	}
	cout << "IMPOSSIBLE\n";
	return;
}
int main() {
	std::ios_base::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
	int test_cases(1);
	//cin >> test_cases;
	while (test_cases--)	solve();
}