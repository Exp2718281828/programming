#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	int a[3][105];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[0][i];
	for (int i = 0; i < n; i++) cin >> a[1][i];
	int s[3][105] = {};
	for (int i = 0; i < n; i++) s[0][i + 1] = s[0][i] + a[0][i];
	for (int i = n - 1; i >= 0; i--) s[1][i] = s[1][i + 1] + a[1][i];
	int ans = 0;
	for (int i = 0; i < n; i++) ans = max(ans, s[0][i + 1] + s[1][i]);
	cout << ans << endl;
}