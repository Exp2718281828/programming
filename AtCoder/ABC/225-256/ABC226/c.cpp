#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, t[200005], k[200005];
	vector<int> a[200005];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t[i] >> k[i];
		for (int j = 0; j < k[i]; j++) {
			int x;
			cin >> x;
			x--;
			a[i].push_back(x);
		}
	}
	long long int ans = 0;
	bool r[200005] = {};
	queue<int> q;
	q.push(n - 1);
	r[n - 1] = true;
	while (!q.empty()) {
		int v = q.front();
		q.pop();
		for (int x : a[v]) {
			if (r[x]) continue;
			r[x] = true;
			q.push(x);
		}
	}
	for (int i = 0; i < n; i++) {
		if (r[i]) ans += t[i];
	}
	cout << ans << endl;
}