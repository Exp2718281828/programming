#include <bits/stdc++.h>
using namespace std;
const int INF = 1 << 30;
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k, a[505], b[505];
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
	for (int i = 0; i < n; i++)
		if (b[i] == -1) b[i] = INF;
	assert(n <= 7);
	vector<int> x;
	double ans = INF;
	for (int i = 0; i < n; i++) x.push_back(i);
	do {
		for (int bit = 0; bit < (1 << k); bit++) {
			double t = 0;
			int p = 1;
			for (int i = 0; i < k; i++) {
				if (bit & (1 << i)) {
					t += (double)b[x[i]] / p;
					p++;
				} else {
					t += (double)a[x[i]] / p;
				}
			}
			ans = min(ans, t);
		}
	} while (next_permutation(x.begin(), x.end()));
	printf("%.16f\n", ans);
}