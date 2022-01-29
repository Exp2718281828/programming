#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, l[2005];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> l[i];
	sort(l, l + n);
	long long int ans = 0;
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			int ok = j;
			int ng = n;
			while (ng - ok > 1) {
				int mid = (ok + ng) / 2;
				if (l[i] + l[j] > l[mid]) {
					ok = mid;
				} else {
					ng = mid;
				}
			}
			ans += ok - j;
		}
	}
	cout << ans << endl;
}