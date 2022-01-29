#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	int ans = 0;
	int v[500005] = {};
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		if (v[i] - v[i - x] >= y) {
			ans++;
			v[i + 1] = v[i] + 1;
		} else {
			v[i + 1] = v[i];
		}
	}
	cout << ans << endl;
}