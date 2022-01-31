#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int n, l, w;
	cin >> n >> l >> w;
	long long int a[100005];
	a[0] = -w;
	for (int i = 0; i < n; i++) cin >> a[i + 1];
	a[n + 1] = l;
	long long int ans = 0;
	for (int i = 0; i < n + 1; i++) {
		long long int d = a[i + 1] - (a[i] + w);
		ans += (d + w - 1) / w;
	}
	cout << ans << endl;
}