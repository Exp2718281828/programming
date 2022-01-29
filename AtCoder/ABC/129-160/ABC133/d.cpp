#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	int a[100005];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	long long int s = 0;
	for (int i = 0; i < n; i++) s += a[i];
	for (int i = 0; i < n - 2; i += 2) s -= 2 * a[i];
	int ans[100005];
	ans[n - 1] = s;
	for (int i = n - 2; i >= 0; i--) {
		ans[i] = 2 * a[i] - ans[i + 1];
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i];
		i == n - 1 ? cout << endl : cout << ' ';
	}
}