#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, h[25];
	cin >> n;
	int ans = 1;
	for (int i = 0; i < n; i++) cin >> h[i];
	for (int i = 1; i < n; i++) {
		if (*max_element(h, h + i) <= h[i]) ans++;
	}
	cout << ans << endl;
}