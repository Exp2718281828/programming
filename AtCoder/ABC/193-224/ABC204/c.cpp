#include <bits/stdc++.h>
using namespace std;

vector<int> g[2005];
bool seen[2005];

void dfs(int v) {
	seen[v] = true;
	for (int i = 0; i < g[v].size(); i++) {
		if (seen[g[v][i]]) continue;
		dfs(g[v][i]);
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		g[a - 1].push_back(b - 1);
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		memset(seen, 0, sizeof(seen));
		dfs(i);
		for (int j = 0; j < n; j++)
			if (seen[j]) ans++;
	}
	cout << ans << endl;
}