#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, a[200005];
	int c[1000005] = {};
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		c[a[i]]++;
	}
	bool ok[1000005] = {};
	for (int i = 0; i < n; i++) ok[a[i]] = c[a[i]] == 1 ? true : false;
	for (int x = 1; x <= 1e6; x++) {
		if (c[x] == 0) continue;
		for (int j = x * 2; j <= 1e6; j += x) {
			if (c[j] > 0) ok[j] = false;
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
		if (ok[a[i]]) ans++;
	cout << ans << endl;
}