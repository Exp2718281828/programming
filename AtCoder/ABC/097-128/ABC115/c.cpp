#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	int h[100005];
	for (int i = 0; i < n; i++) cin >> h[i];
	sort(h, h + n);
	int ans = INF;
	for (int i = 0; i < n - k + 1; i++) {
		ans = min(ans, h[i + k - 1] - h[i]);
	}
	cout << ans << endl;
}