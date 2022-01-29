#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k;
	int a[100005];
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> a[i];
	map<int, int> d;
	int e = 0;
	int l = 0, r = 0;
	int ans = 0;
	while (r < n) {
		if (e < k) {
			if (d[a[r]] == 0) e++;
			d[a[r]]++;
			r++;
			ans = max(ans, r - l);
		} else {
			if (d[a[r]] == 0) {
				if (d[a[l]] == 1) e--;
				d[a[l]]--;
				l++;
			} else {
				d[a[r]]++;
				r++;
				ans = max(ans, r - l);
			}
		}
	}
	cout << ans << endl;
}