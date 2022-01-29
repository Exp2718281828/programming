#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int n;
	long long int ans = 0;
	cin >> n;
	for (long long int i = 1; i <= n; i++) {
		long long int s = n / i;
		long long int l = n / s;
		ans += s * (l - i + 1);
		i = l;
	}
	cout << ans << endl;
}