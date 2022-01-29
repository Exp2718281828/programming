#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int l, r;
		cin >> l >> r;
		ans += r - l + 1;
	}
	cout << ans << endl;
}