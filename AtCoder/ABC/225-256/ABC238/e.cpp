#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	vector<int> d[200005];
	int n, q;
	cin >> n >> q;
	while (q--) {
		int l, r;
		cin >> l >> r;
		r++;
		d[l].push_back(r);
		d[r].push_back(l);
	}
	if (d[n + 1].empty()) {
		cout << "No" << endl;
		return 0;
	}
	bool v[200005] = {};
	v[n + 1] = true;
	queue<int> que;
	que.push(n + 1);
	while (!que.empty()) {
		int u = que.front();
		que.pop();
		for (int x : d[u]) {
			if (v[x]) continue;
			v[x] = true;
			que.push(x);
		}
	}
	if (v[1])
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}