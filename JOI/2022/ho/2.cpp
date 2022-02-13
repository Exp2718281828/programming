#include <bits/stdc++.h>
using namespace std;
const long long int INF = 1LL << 60;
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int n, m;
	int a[300005], b[300005];
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];
	for (int i = 0; i < n; i++)
		if (a[i] < b[i]) a[i] = b[i];
	long long int ok = 0, ng = INF;
	while (ng - ok > 1) {
		long long int mid = (ng + ok) / 2;
		long long int l = n * m;
		for (int i = 0; i < n; i++) {
			long long int t = (mid + a[i] - 1) / a[i];
			if (t > m) t = m;
			l -= t;
			if (l < 0) break;
			long long int u = mid - a[i] * t;
			if (u > 0) {
				long long int v = (u + b[i] - 1) / b[i];
				l -= v;
			}
			if (l < 0) break;
		}
		if (l >= 0)
			ok = mid;
		else
			ng = mid;
	}
	cout << ok << endl;
}