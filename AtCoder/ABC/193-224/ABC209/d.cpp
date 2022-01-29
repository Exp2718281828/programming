#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;

int main() {
	int n, q;
	vector<int> g[100005];
	int c[100005], d[100005];
	cin >> n >> q;
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		g[a - 1].push_back(b - 1);
		g[b - 1].push_back(a - 1);
	}
	for (int i = 0; i < q; i++) {
		cin >> c[i] >> d[i];
		c[i]--;
		d[i]--;
	}
	queue<int> Que;
	Que.push(0);
	int k[100005];
	for (int i = 0; i < n; i++) k[i] = INF;
	k[0] = 0;
	int u;
	while (!Que.empty()) {
		u = Que.front();
		Que.pop();
		for (int i = 0; i < g[u].size(); i++) {
			if (k[g[u][i]] != INF) continue;
			k[g[u][i]] = k[u] + 1;
			Que.push(g[u][i]);
		}
	}
	for (int i = 0; i < q; i++) {
		if ((abs(k[c[i]] - k[d[i]]) % 2) == 0)
			cout << "Town" << endl;
		else
			cout << "Road" << endl;
	}
}
