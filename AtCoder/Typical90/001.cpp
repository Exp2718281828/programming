#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, l, k;
	int a[100005];
	cin >> n >> l >> k;
	a[0] = 0;
	for (int i = 0; i < n; i++) cin >> a[i + 1];
	a[n + 1] = l;
	int ok = 1;
	int ng = 1 << 30;
	while (ng - ok > 1) {
		int mid = (ok + ng) / 2;
		int c = 0;
		int d = 0;
		for (int i = 1; i <= n + 1; i++) {
			d += a[i] - a[i - 1];
			if (d >= mid) {
				c++;
				d = 0;
			}
		}
		if (c < k + 1)
			ng = mid;
		else
			ok = mid;
	}
	cout << ok << endl;
}