#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
	int n, m;
	cin >> n >> m;
	long long int k[200005] = {};
	k[0] = 1;
	vector<int> r[200005];
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		r[a - 1].push_back(b - 1);
		r[b - 1].push_back(a - 1);
	}
	int d[200005];
	memset(d, -1, sizeof(d));
	d[0] = 0;
	queue<int> q;
	q.push(0);
	int u;
	while (!q.empty()) {
		u = q.front();
		q.pop();
		for (int i = 0; i < r[u].size(); i++) {
			int v = r[u][i];
			if (d[v] - d[u] == 1) {
				k[v] += k[u];
				k[v] %= MOD;
			}
			if (d[v] != -1) continue;
			if (d[v] - d[u] != 1) {
				k[v] += k[u];
				k[v] %= MOD;
			}
			d[v] = d[u] + 1;
			q.push(v);
		}
	}
	cout << k[n - 1] << endl;
}