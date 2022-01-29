#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	int a[100005], b[100005];
	cin >> n;
	for (int i = 0; i < n + 1; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];
	long long int ans = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] <= b[i]) {
			ans += a[i];
			b[i] -= a[i];
			a[i] = 0;
		} else {
			ans += b[i];
			a[i] -= b[i];
			b[i] = 0;
		}
		if (a[i + 1] <= b[i]) {
			ans += a[i + 1];
			b[i] -= a[i + 1];
			a[i + 1] = 0;
		} else {
			ans += b[i];
			a[i + 1] -= b[i];
			b[i] = 0;
		}
	}
	cout << ans << endl;
}