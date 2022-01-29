#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m, k;
	cin >> n >> m >> k;
	assert(n <= 1000 && m <= 1000 && k <= 1000);
	vector<int> v[1005];
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		x--, y--;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int s[1005];
	for (int i = 0; i < n; i++) cin >> s[i];
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		bool visited[1005] = {};
		queue<int> que;
		que.push(a);
		visited[a] = true;
		while (!que.empty()) {
			int u = que.front();
			que.pop();
			for (int x : v[u]) {
				if (visited[x]) continue;
				if (s[x] != s[a] && s[x] != s[b]) continue;
				visited[x] = true;
				que.push(x);
			}
		}
		if (visited[b])
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
}