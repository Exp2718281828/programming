#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, w[105];
	int s[105] = {};
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> w[i];
		s[i + 1] = s[i] + w[i];
	}
	int ans = 1000000;
	for (int i = 0; i < n - 1; i++) {
		ans = min(ans, abs(s[n] - 2 * s[i + 1]));
	}
	cout << ans << endl;
}