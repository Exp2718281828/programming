#include <bits/stdc++.h>
using namespace std;

int n, m, q;
int a[105], b[105], c[105], d[105];
vector<vector<int>> p;

int score(vector<int>& x) {
	int s = 0;
	for (int i = 0; i < q; i++) {
		if (x[b[i] - 1] - x[a[i] - 1] == c[i]) s += d[i];
	}
	return s;
}

void genperm(vector<int> x) {
	if (x.size() == n) {
		p.push_back(x);
	} else {
		for (int i = (x.empty() ? 1 : x[x.size() - 1]); i <= m; i++) {
			vector<int> y = x;
			y.push_back(i);
			genperm(y);
		}
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m >> q;
	for (int i = 0; i < q; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];
	genperm({});
	int ans = 0;
	for (auto y : p) {
		ans = max(ans, score(y));
	}
	cout << ans << endl;
}