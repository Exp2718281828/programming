#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	long long int x;
	cin >> n >> x;
	long long int a[100];
	for (int i = 0; i < n; i++) cin >> a[i];
	a[n] = a[n - 1];
	long long int m[105];
	for (int i = 0; i < n; i++) {
		m[i] = a[i + 1] / a[i];
	}
	m[n - 1] = 1;
	long long int b[100] = {};
	for (int i = 1; i < n; i++) {
		b[i - 1] = x % (a[i] / a[i - 1]);
		x /= (a[i] / a[i - 1]);
	}
	long long int ans = 0;
	int over = 0;
	for (int i = 0; i < n; i++) {
		long long int z1 = INF, z2 = INF;
		if (over > 0) {
			long long int p = m[i] - b[i] - 1;
			long long int q = (b[i] + 1) % m[i];
			if (p > q) {
				z1 = q;
				over = 0;
			} else if (p < q) {
				z1 = p;
				over = 2;
			} else {
				z1 = p;
				over = 1;
			}
		} else if (over < 2) {
			long long int p = m[i] - b[i];
			long long int q = b[i];
			if (p > q) {
				z2 = q;
				over = 0;
			} else if (p < q) {
				z2 = p;
				over = 2;
			} else {
				z2 = p;
				over = 1;
			}
		}
		ans += min(z1, z2);
	}
	cout << ans << endl;
}