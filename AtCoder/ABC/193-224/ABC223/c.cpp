#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	int a[100005], b[100005];
	double sl[100005] = {}, st[100005] = {};
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		st[i + 1] = st[i] + (double)a[i] / b[i];
		sl[i + 1] = sl[i] + a[i];
	}
	int p;
	for (int i = 0;; i++) {
		if (st[i] * 2 <= st[n] && st[i + 1] * 2 > st[n]) {
			p = i;
			break;
		}
	}
	double t = st[n] / 2.0;
	t -= st[p];
	double ans = sl[p] + t * b[p];
	printf("%.16f\n", ans);
}