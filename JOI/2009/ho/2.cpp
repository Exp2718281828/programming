#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int d, n, m, s[100005], x = 0;
	cin >> d >> n >> m;
	s[0] = 0;
	for (int i = 0; i < n - 1; i++) {
		int z;
		cin >> z;
		s[i + 1] = z;
	}
	sort(s, s + n);
	for (int i = 0; i < m; i++) {
		int k, l1, l2;
		int ans;
		cin >> k;
		l2 = lower_bound(s, s + n, k) - s;
		if (l2 == n) {
			ans = min(d - k, k - s[n - 1]);
		} else {
			l1 = l2 - 1;
			ans = min(k - s[l1], s[l2] - k);
		}
		// cout << ans << endl;
		// cout << l1 << " " << l2 << endl;
		x += ans;
	}
	cout << x << endl;
}