#include <bits/stdc++.h>
using namespace std;

int n;
priority_queue<int, vector<int>, greater<int>> g[200005];
bool visited[200005];
bool iffirst = true;

void dfs(int u) {
	if (!iffirst) cout << ' ';
	iffirst = false;
	cout << u + 1;
	visited[u] = true;
	while (!g[u].empty()) {
		int v = g[u].top();
		g[u].pop();
		if (!visited[v]) {
			dfs(v);
			if (!iffirst) cout << ' ';
			iffirst = false;
			cout << u + 1;
		}
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		g[a - 1].push(b - 1);
		g[b - 1].push(a - 1);
	}
	dfs(0);
	cout << endl;
}