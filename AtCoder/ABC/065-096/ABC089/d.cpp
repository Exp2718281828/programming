#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int h, w, d;
	cin >> h >> w >> d;
	int a[305][305];
	pair<int, int> p[90005];
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++) {
			cin >> a[i][j];
			a[i][j]--;
			p[a[i][j]] = {i, j};
		}
	vector<vector<int>> s;
	for (int i = 0; i < d; i++) {
		vector<int> x;
		for (int j = 0; i + (j + 1) * d < h * w; j++) {
			int y = abs(p[i + d * j].first - p[i + d * (j + 1)].first) +
					abs(p[i + d * j].second - p[i + d * (j + 1)].second);
			x.push_back(y);
		}
		vector<int> z;
		z.push_back(0);
		for (int j = 0; j < x.size(); j++) z.push_back(z[j] + x[j]);
		s.push_back(z);
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int l, r;
		cin >> l >> r;
		l--, r--;
		cout << s[r % d][r / d] - s[l % d][l / d] << endl;
	}
}