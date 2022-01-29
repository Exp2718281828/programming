#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;

int main() {
	int n, m;
	cin >> n >> m;
	int a[200005], b[200005];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < m; i++) cin >> b[i];
	sort(a, a + n);
	sort(b, b + m);
	int ans = INF;
	int p = 0, q = 0;
	while (p < n && q < m) {
		if (a[p] == b[q]) {
			ans = 0;
			break;
		} else if (a[p] > b[q]) {
			ans = min(ans, a[p] - b[q]);
			q++;
		} else {
			ans = min(ans, b[q] - a[p]);
			p++;
		}
	}
	cout << ans << endl;
}