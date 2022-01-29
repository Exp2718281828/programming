#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;

P operator+(const P& p1, const P& p2) {
	return {p1.first + p2.first, p1.second + p2.second};
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int m, n;
	P p[205];
	P q[1005];
	cin >> m;
	for (int i = 0; i < m; i++) cin >> p[i].first >> p[i].second;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> q[i].first >> q[i].second;
	sort(p, p + m);
	sort(q, q + n);
	for (int i = 0; i < n; i++) {
		int dx = q[i].first - p[0].first;
		int dy = q[i].second - p[0].second;
		int s = 0;
		int t = 0, u = 0;
		P d = {dx, dy};
		while (t < n) {
			P e = p[u] + d;
			if (e == q[t]) {
				s++;
				t++;
				u++;
			} else {
				t++;
			}
		}
		if (s == m) {
			cout << dx << ' ' << dy << endl;
			return 0;
		}
	}
	cout << '#' << endl;
}