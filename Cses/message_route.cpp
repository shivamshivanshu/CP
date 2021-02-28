#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


const int N = 1e5 + 5, M = 2e5 + 5;
int n, m;
vector<int> g[N];
vector<int> dist(N, -1);
vector<int> parent(N, 0);
void bfs(int s) {
	queue<int> q;
	dist[s] = 0;
	q.push(s);
	while (!q.empty()) {
		int from = q.front();
		q.pop();
		for (auto to : g[from]) {
			if (dist[to] == -1) {
				dist[to] = 1 + dist[from];
				parent[to] = from;
				if (to == n - 1)	return;
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
	bfs(0);
	if (dist[n - 1] == -1) {
		cout << "IMPOSSIBLE\n";
		return;
	}
	cout << dist[n - 1] + 1 << endl;
	vector<int> path;
	int curr = n - 1;
	while (curr != 0) {
		path.emplace_back(curr);
		curr = parent[curr];
	}
	path.emplace_back(0);
	reverse(path.begin(), path.end());
	for (auto i : path) {
		cout << i + 1 << " ";
	}
	cout << endl;
}
int main() {
	std::ios_base::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
	int test_cases(1);
	//cin >> test_cases;
	while (test_cases--)	solve();
}