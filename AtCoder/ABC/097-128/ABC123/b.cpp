#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int t[5];
	int x[5] = {0, 1, 2, 3, 4};
	for (int i = 0; i < 5; i++) cin >> t[i];
	int ans = 10000000;
	do {
		int u = 0;
		for (int i = 0; i < 4; i++) {
			u += (t[x[i]] + 9) / 10 * 10;
		}
		u += t[x[4]];
		ans = min(ans, u);
	} while (next_permutation(x, x + 5));
	cout << ans << endl;
}