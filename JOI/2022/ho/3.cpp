#include <bits/stdc++.h>
using namespace std;
const int INF = 1 << 30;
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k;
	vector<pair<int, int>> a;
	vector<pair<pair<int, int>, int>> b;
	// set<int> d;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		a.push_back({x, i});
		b.push_back({{(y == -1 ? INF : y), -x}, i});
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	double ans = INF;
	for (int i = 0; i <= k; i++) {
		bool v[505] = {};
		double t = 0;
		int u = 1;
		for (int j = 0; j < i; j++) {
			t += (double)b[j].first.first / u;
			v[b[j].second] = true;
			u++;
		}
		int z = i;
		int p = 0;
		while (z < k) {
			if (!v[a[p].second]) {
				v[a[p].second] = true;
				z++;
				t += (double)a[p].first / u;
				// if (d.find(a[p].second) != d.end()) u++;
			}
			p++;
		}
		ans = min(ans, t);
	}
	printf("%.16f\n", ans);
}