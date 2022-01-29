#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	pair<int, int> a[100005];
	for (int i = 0; i < m; i++) cin >> a[i].second >> a[i].first;
	sort(a, a + m);
	bool b[100005] = {};
	int x = -INF;
	int ans = 0;
	for (pair<int, int> y : a) {
		if (x < y.second) {
			ans++;
			x = y.first - 1;
		}
	}
	cout << ans << endl;
}
