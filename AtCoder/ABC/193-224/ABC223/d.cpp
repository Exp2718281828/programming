#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	vector<int> q[200005];
	vector<int> ans;
	int f[200005] = {}, t[200005] = {};
	bool p[200005] = {};
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		q[a].push_back(b);
		f[a]++;
		t[b]++;
	}
	set<int> z;
	for (int i = 0; i < n; i++)
		if (t[i] == 0) z.insert(i);
	for (int i = 0; i < n; i++) {
		if (z.empty()) {
			cout << -1 << endl;
			return 0;
		}
		int x = *(z.begin());
		z.erase(x);
		ans.push_back(x + 1);
		for (int v : q[x]) {
			t[v]--;
			if (t[v] == 0) z.insert(v);
		}
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i];
		i == n - 1 ? cout << endl : cout << ' ';
	}
}