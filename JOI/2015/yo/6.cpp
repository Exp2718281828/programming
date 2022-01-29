#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	long long int d;
	long long int x[40], y[40];
	cin >> n >> d;
	long long int ans = 0;
	for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
	long long int m = pow(3, n);
	for (long long int i = 0; i < m; i++) {
		int c[40];
		long long int is = i;
		for (int j = 0; j < n; j++) {
			c[j] = is % 3;
			is /= 3;
		}
		long long int va = 0, vb = 0, pa = 0, pb = 0;
		for (int j = 0; j < n; j++) {
			if (c[j] == 1) {
				va += x[j];
				pa += y[j];
			} else if (c[j] == 2) {
				vb += x[j];
				pb += y[j];
			}
		}
		if (abs(va - vb) <= d) {
			ans = max(ans, pb - pa);
		}
	}
	cout << ans << endl;
}