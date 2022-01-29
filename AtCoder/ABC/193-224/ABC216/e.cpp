#include <bits/stdc++.h>
using namespace std;

const long long int INF = 2e10;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k;
	long long int a[100005];
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> a[i];
	long long int s = 0;
	for (int i = 0; i < n; i++) s += a[i];
	unsigned long long int t;
	if (k >= s) {
		t = 1;
	} else {
		long long int ng = 1, ok = INF;
		while (ok - ng > 1) {
			long long int mid = (ok + ng) / 2;
			long long int x = 0;
			for (int i = 0; i < n; i++) x += mid <= a[i] ? a[i] - mid + 1 : 0;
			if (x <= k)
				ok = mid;
			else
				ng = mid;
		}
		t = ok;
	}
	unsigned long long int ans = 0;
	unsigned long long int z = 0;
	for (int i = 0; i < n; i++) {
		ans += t <= a[i] ? (a[i] - t + 1) * (a[i] + t) / 2 : 0;
		z += t <= a[i] ? a[i] - t + 1 : 0;
	}
	ans += (k - z) * (t - 1);
	cout << ans << endl;
}