#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	double ans = 0.0;
	for (int i = 1; i <= n; i++) {
		if (i >= k) {
			ans += 1.0 / n;
		} else {
			ans += (1.0 / n) * pow(0.5, ceil(log2((double)k / i)));
		}
	}
	printf("%.16f\n", ans);
}