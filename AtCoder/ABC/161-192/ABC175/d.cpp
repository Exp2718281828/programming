#include <bits/stdc++.h>
using namespace std;

const long long int INF = 1LL << 60;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k;
	long long int p[5005], c[5005];
	cin >> n >> k;
	long long int ans = -INF;
	for (int i = 0; i < n; i++) {
		cin >> p[i];
		p[i]--;
	}
	for (int i = 0; i < n; i++) cin >> c[i];
	bool u[5005] = {};
	vector<vector<int>> r;
	for (int i = 0; i < n; i++) {
		if (u[i]) continue;
		u[i] = true;
		int q = i;
		vector<int> a;
		while (1) {
			a.push_back(q);
			u[q] = true;
			q = p[q];
			if (u[q]) break;
		}
		r.push_back(a);
	}
	for (vector<int> x : r) {
		long long int q = 0;
		for (int y : x) q += c[y];
		vector<long long int> s;
		s.push_back(0);
		for (int i = 0; i < 2 * x.size(); i++) s.push_back(s[i] + c[x[(i % x.size())]]);
		for (int i = 1; i <= x.size() && i <= k; i++) {
			for (int j = 0; j < x.size(); j++) {
				long long int a;
				int u = k - i;
				a = (long long)(q > 0 ? q : 0) * (u / x.size()) + s[j + i] - s[j];
				ans = max(ans, a);
			}
		}
	}
	cout << ans << endl;
}