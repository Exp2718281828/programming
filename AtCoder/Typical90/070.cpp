#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	int x[100005], y[100005];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
	sort(x, x + n);
	sort(y, y + n);
	int mx = x[n / 2];
	int my = y[n / 2];
	long long int ans = 0;
	for (int i = 0; i < n; i++) ans += abs(x[i] - mx);
	for (int i = 0; i < n; i++) ans += abs(y[i] - my);
	cout << ans << endl;
}