#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	long long int a[200005], c[200005] = {};
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a[i] = x;
		c[x]++;
	}
	long long int ans = 0;
	for (int i = 0; i < n; i++) ans += c[i + 1] * (c[i + 1] - 1) / 2;
	for (int i = 0; i < n; i++) {
		cout << ans - c[a[i]] + 1 << endl;
	}
}