#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;

P d(P a, P b) {
	P ans;
	int dx = a.first - b.first;
	int dy = a.second - b.second;
	if (dx != 0 && dy != 0) {
		int g = __gcd(abs(dx), abs(dy));
		ans.first = dx / g;
		ans.second = dy / g;
	} else if (dx == 0) {
		ans = {0, dy / abs(dy)};
	} else {
		ans = {dx / abs(dx), 0};
	}
	return ans;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	P p[505];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
	set<P> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) continue;
			m.insert(d(p[i], p[j]));
		}
	}
	cout << m.size() << endl;
}