#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, x;
	bool c[100005] = {};
	cin >> n >> x;
	x--;
	int q[100005];
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		q[i] = a - 1;
	}
	queue<int> que;
	que.push(x);
	c[x] = true;
	while (!que.empty()) {
		int u = que.front();
		que.pop();
		if (!c[q[u]]) {
			c[q[u]] = true;
			que.push(q[u]);
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
		if (c[i]) ans++;
	cout << ans << endl;
}