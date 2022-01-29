#include <bits/stdc++.h>
using namespace std;

const double PI = 3.141592653589793;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long double t, l, x, y;
	int q;
	cin >> t >> l >> x >> y >> q;
	for (int i = 0; i < q; i++) {
		long double e;
		cin >> e;
		long double theta = e / t * 2.0 * PI;
		long double a = sqrt(x * x + (y + l / 2.0 * sin(theta)) * (y + l / 2.0 * sin(theta)));
		long double b = (1.0 - cos(theta)) * l / 2.0;
		long double phi = atan2(b, a);
		long double ans = phi * 180.0L / PI;
		printf("%.16Lf\n", ans);
	}
}