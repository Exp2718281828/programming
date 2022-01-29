#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	vector<int> q[100005];
	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		q[a].push_back(b);
		q[b].push_back(a);
	}
	queue<int> que;
	int dist[100005] = {};
	for (int i = 0; i < n; i++) dist[i] = INF;
	dist[0] = 0;
	que.push(0);
	while (!que.empty()) {
		int v = que.front();
		que.pop();
		for (int u : q[v]) {
			if (dist[u] == INF) {
				dist[u] = dist[v] + 1;
				que.push(u);
			}
		}
	}
	int m = 0;
	for (int i = 0; i < n; i++) {
		if (dist[i] > dist[m]) m = i;
	}

	for (int i = 0; i < n; i++) dist[i] = INF;
	dist[m] = 0;
	que.push(m);
	while (!que.empty()) {
		int v = que.front();
		que.pop();
		for (int u : q[v]) {
			if (dist[u] == INF) {
				dist[u] = dist[v] + 1;
				que.push(u);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (dist[i] > dist[m]) m = i;
	}
	cout << dist[m] + 1 << endl;
}