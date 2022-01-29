#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	long long int s[100005] = {};
	long long int x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		s[i + 1] = s[i] + a;
	}
	cin >> x;
	long long int ans = 0;
	ans += x / s[n] * n;
	x -= x / s[n] * s[n];
	for (int i = 0; i < n + 1; i++) {
		if (s[i] > x) {
			ans += i;
			cout << ans << endl;
			return 0;
		}
	}
}