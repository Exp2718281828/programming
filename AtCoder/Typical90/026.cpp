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
	que.push(0);
	int d[100005];
	for (int i = 0; i < n; i++) d[i] = INF;
	while (!que.empty()) {
		int v = que.front();
		que.pop();
		for (int u : q[v]) {
			if (d[u] != INF) continue;
			d[u] = d[v] + 1;
			que.push(u);
		}
	}
	vector<int> ans1, ans2;
	for (int i = 0; i < n; i++) {
		if (d[i] % 2 == 0) {
			ans1.push_back(i + 1);
		} else {
			ans2.push_back(i + 1);
		}
	}
	for (int i = 0; i < n / 2; i++) {
		cout << (ans1.size() > ans2.size() ? ans1[i] : ans2[i]);
		i == n / 2 - 1 ? cout << endl : cout << ' ';
	}
}