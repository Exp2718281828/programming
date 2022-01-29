#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int l, r;
	cin >> l >> r;
	if (r - l > 2019) {
		cout << 0 << endl;
		return 0;
	}
	long long int ans = 2020;
	for (int i = l; i <= r; i++) {
		for (int j = i + 1; j <= r; j++) ans = min(ans, (long long)i * j % 2019);
	}
	cout << ans << endl;
}