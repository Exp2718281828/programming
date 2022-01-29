#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int a[100005], b[100005], c[100005];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];
	for (int i = 0; i < n; i++) cin >> c[i];
	sort(a, a + n);
	sort(b, b + n);
	sort(c, c + n);
	int j = 0, k = 0;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		while (a[i] >= b[j] && j < n) j++;
		while (b[j] >= c[k] && k < n) k++;
		if (j == n || k == n) break;
		ans++;
		j++;
		k++;
	}
	cout << ans << endl;
}