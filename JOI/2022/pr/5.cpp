#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int n, m;
	cin >> n >> m;
	long long int p[1005];
	for (int i = 0; i < n; i++) cin >> p[i];
	p[n] = 0;
	vector<long long> q;
	for (int i = 0; i < n + 1; i++) {
		for (int j = i; j < n + 1; j++) {
			q.push_back(p[i] + p[j]);
		}
	}
	q.erase(unique(q.begin(), q.end()), q.end());
	sort(q.begin(), q.end());
	long long int ans = 0;
	int r = lower_bound(q.begin(), q.end(), m) - q.begin() - 1;
	for (long long int x : q) {
		if (x > m) break;
		while (x + q[r] > m) r--;
		ans = max(ans, x + q[r]);
	}
	cout << ans << endl;
}