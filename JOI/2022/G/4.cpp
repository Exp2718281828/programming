#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int h, w, n;
	map<pair<int, int>, int> d;
	cin >> h >> w >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		d[{a, b}]++;
	}
	int ans = 0;
	for (auto it = d.begin(); it != d.end(); it++) {
		pair<int, int> u = it->first;
		for (int dx = -2; dx <= 0; dx++) {
			for (int dy = -2; dy <= 0; dy++) {
				int c = 0;
				for (int i = 0; i <= 2; i++) {
					for (int j = 0; j <= 2; j++) {
						if (d.find({u.first + dx + i, u.second + dy + j}) != d.end())
							c += d[{u.first + dx + i, u.second + dy + j}];
					}
				}
				ans = max(c, ans);
			}
		}
	}
	cout << ans << endl;
}
