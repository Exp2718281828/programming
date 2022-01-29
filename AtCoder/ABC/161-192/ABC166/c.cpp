#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	int h[100005];
	bool c[100005] = {};
	cin >> n >> m;
	for (int i = 0; i < n; i++) c[i] = true;
	for (int i = 0; i < n; i++) cin >> h[i];
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		if (h[a] >= h[b]) c[b] = false;
		if (h[a] <= h[b]) c[a] = false;
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
		if (c[i]) ans++;
	cout << ans << endl;
}