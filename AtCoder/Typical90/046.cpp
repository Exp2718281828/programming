#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	long long int a[50] = {}, b[50] = {}, c[50] = {};
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a[x % 46]++;
	}
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		b[x % 46]++;
	}
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		c[x % 46]++;
	}
	long long int ans = 0;
	for (int i = 0; i < 46; i++) {
		for (int j = 0; j < 46; j++) {
			ans += a[i] * b[j] * c[(460 - i - j) % 46];
		}
	}
	cout << ans << endl;
}