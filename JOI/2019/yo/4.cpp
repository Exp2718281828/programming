#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, a[100005];
	vector<int> as;
	bool nonzero = true;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		as.push_back(a[i]);
		if (a[i] != 0) nonzero = false;
	}
	if (nonzero) {
		cout << 0 << endl;
		return 0;
	}
	sort(as.begin(), as.end());
	as.erase(unique(as.begin(), as.end()), as.end());
	int ap[100005];
	for (int i = 0; i < n; i++) {
		ap[i + 1] = lower_bound(as.begin(), as.end(), a[i]) - as.begin() + 1;
	}
	ap[0] = 0;
	ap[n + 1] = 0;
	int s[100005] = {};
	int sgn = 1;
	for (int i = 0; i < n + 2; i++) {
		int d = ap[i + 1] - ap[i];
		if (d / abs(d) != sgn) {
			s[ap[i]] -= sgn;
			sgn *= -1;
		}
	}
	for (int i = 1; i < n + 3; i++) {
		s[i] += s[i - 1];
	}
	int ans = 0;
	for (int i = 0; i < n + 3; i++) {
		ans = max(ans, s[i]);
	}
	cout << ans << endl;
}