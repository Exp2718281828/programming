#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, q;
	int a[300005], b[300005];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> q;
	for (int i = 0; i < q; i++) cin >> b[i];
	sort(a, a + n);
	for (int i = 0; i < q; i++) {
		int ans = 0;
		auto itr = lower_bound(a, a + n, b[i]);
		if (itr == &a[0])
			ans = a[0] - b[i];
		else if (itr == &a[n])
			ans = b[i] - a[n - 1];
		else {
			int x = *itr;
			itr--;
			int y = *itr;
			ans = min(x - b[i], b[i] - y);
		}
		cout << ans << endl;
	}
}