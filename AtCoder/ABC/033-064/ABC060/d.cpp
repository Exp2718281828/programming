#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, w;
	cin >> n >> w;
	long long int w0, v0;
	vector<int> v[4];
	cin >> w0 >> v0;
	v[0].push_back(v0);
	for (int i = 0; i < n - 1; i++) {
		int x, y;
		cin >> x >> y;
		v[x - w0].push_back(y);
	}
	for (int i = 0; i < 4; i++) sort(v[i].begin(), v[i].end(), greater<int>());
	vector<int> vs[4];
	for (int i = 0; i < 4; i++) {
		vs[i].push_back(0);
		for (int j = 0; j < v[i].size(); j++) vs[i].push_back(vs[i][j] + v[i][j]);
	}
	int ans = 0;
	for (int i = 0; i <= v[0].size(); i++) {
		for (int j = 0; j <= v[1].size(); j++) {
			for (int k = 0; k <= v[2].size(); k++) {
				for (int l = 0; l <= v[3].size(); l++) {
					if (w0 * i + (w0 + 1) * j + (w0 + 2) * k + (w0 + 3) * l > w) continue;
					int s = vs[0][i] + vs[1][j] + vs[2][k] + vs[3][l];
					ans = max(ans, s);
				}
			}
		}
	}
	cout << ans << endl;
}