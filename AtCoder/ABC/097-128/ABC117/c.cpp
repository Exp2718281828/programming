#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	int x[100005];
	for (int i = 0; i < m; i++) cin >> x[i];
	sort(x, x + m);
	vector<int> d;
	for (int i = 0; i < m - 1; i++) {
		d.push_back(x[i + 1] - x[i]);
	}
	sort(d.begin(), d.end());
	int ans = 0;
	for (int i = 0; i < m - n; i++) ans += d[i];
	cout << ans << endl;
}