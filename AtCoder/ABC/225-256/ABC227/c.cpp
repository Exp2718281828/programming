#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int n, ans = 0;
	cin >> n;
	for (long long int a = 1; a * a * a <= n; a++) {
		long long int m = n / a;
		for (long long int b = a; b * b <= m; b++) {
			long long int l = m / b;
			ans += l - b + 1;
		}
	}
	cout << ans << endl;
}