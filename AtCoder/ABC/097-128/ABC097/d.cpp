#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	int p[100005];
	vector<int> q[100005];
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> p[i], p[i]--;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		x--, y--;
		q[x].push_back(y);
		q[y].push_back(x);
	}
	vector<priority_queue<int, vector<int>, greater<int>>> c;
	vector<priority_queue<int, vector<int>, greater<int>>> d;
	set<int> k;
	for (int i = 0; i < n; i++) k.insert(i);
	while (!k.empty()) {
		int t = *k.begin();
		k.erase(t);
		priority_queue<int, vector<int>, greater<int>> c_x;
		priority_queue<int, vector<int>, greater<int>> d_x;
		queue<int> que;
		que.push(t);
		bool visited[100005] = {};
		visited[t] = true;
		c_x.push(t);
		d_x.push(p[t]);
		while (!que.empty()) {
			int u = que.front();
			que.pop();
			for (int x : q[u]) {
				if (visited[x]) continue;
				c_x.push(x);
				d_x.push(p[x]);
				visited[x] = true;
				que.push(x);
				k.erase(x);
			}
		}
		c.push_back(c_x);
		d.push_back(d_x);
	}
	int ans = 0;
	for (int i = 0; i < c.size(); i++) {
		while (!(c[i].empty() || d[i].empty())) {
			if (c[i].top() == d[i].top()) {
				ans++;
				c[i].pop();
				d[i].pop();
			} else if (c[i].top() > d[i].top()) {
				d[i].pop();
			} else {
				c[i].pop();
			}
		}
	}
	cout << ans << endl;
}