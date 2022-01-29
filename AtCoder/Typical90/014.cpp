#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	int a[100005], b[100005];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];
	sort(a, a + n);
	sort(b, b + n);
	long long int ans = 0;
	for (int i = 0; i < n; i++) ans += abs(a[i] - b[i]);
	cout << ans << endl;
}