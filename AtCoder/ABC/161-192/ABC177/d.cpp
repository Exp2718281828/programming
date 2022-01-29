#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	vector<int> q[200005];
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		q[a].push_back(b);
		q[b].push_back(a);
	}
	bool visited[200005] = {};
	int ans = 0;
	set<int> w;
	for (int i = 0; i < n; i++) w.insert(i);
	while (!w.empty()) {
		int c = 0;
		int a = *w.begin();
		w.erase(a);
		queue<int> que;
		que.push(a);
		while (!que.empty()) {
			int v = que.front();
			que.pop();
			for (int x : q[v]) {
				if (visited[x]) continue;
				visited[x] = true;
				que.push(x);
				w.erase(x);
				c++;
			}
		}
		ans = max(ans, c);
	}
	cout << (m == 0 ? 1 : ans) << endl;
}