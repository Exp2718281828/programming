#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	int s[200005], t[200005];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> s[i];
	for (int i = 0; i < n; i++) cin >> t[i];
	int lastchecked = n - 1;
	int ans[200005];
	for (int i = 0; i < n; i++) ans[i] = INF;
	int i = 0;
	while (1) {
		if (lastchecked == i) break;
		int b = ans[i];
		if (ans[(i + n - 1) % n] + s[(i + n - 1) % n] < t[i]) {
			ans[i] = ans[(i + n - 1) % n] + s[(i + n - 1) % n];
		} else {
			ans[i] = t[i];
		}
		if (b != ans[i]) lastchecked = i;
		i = (i + 1) % n;
	}
	for (int i = 0; i < n; i++) cout << ans[i] << endl;
}