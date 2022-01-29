#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, q;
	long long int d[100005];
	cin >> n >> q;
	int a[100005];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n - 1; i++) d[i] = a[i + 1] - a[i];
	long long int s = 0;
	for (int i = 0; i < n - 1; i++) s += abs(d[i]);
	for (int i = 0; i < q; i++) {
		int l, r, v;
		cin >> l >> r >> v;
		l--;
		r--;
		long long int y = 0;
		if (l > 0) {
			long long int c;
			c = abs(d[l - 1]);
			d[l - 1] += v;
			y += abs(d[l - 1]) - c;
		}
		if (r < n - 1) {
			long long int c;
			c = abs(d[r]);
			d[r] -= v;
			y += abs(d[r]) - c;
		}
		s += y;
		cout << s << endl;
	}
}