#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	int v[55];
	for (int i = 0; i < n; i++) cin >> v[i];
	int vs[55], vt[55];
	vs[0] = vt[0] = 0;
	for (int i = 0; i < n; i++) vs[i + 1] = vs[i] + v[i];
	for (int i = 0; i < n; i++) vt[i + 1] = vt[i] + v[n - 1 - i];
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= min(k, n) - i; j++) {
			multiset<int> d;
			for (int l = 0; l < i; l++) d.insert(v[l]);
			for (int l = 0; l < j; l++) d.insert(v[n - 1 - l]);
			int s = vs[i] + vt[j];
			int c = i + j;
			for (auto it = d.begin(); it != d.end(); it++) {
				c++;
				if (c > k) break;
				int w = *it;
				if (w > 0) break;
				s -= w;
			}
			ans = max(ans, s);
		}
	}
	cout << ans << endl;
}