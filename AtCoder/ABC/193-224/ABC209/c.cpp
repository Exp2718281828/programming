#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
	int n, c[200005];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> c[i];
	sort(c, c + n);
	long long int ans = 1;
	for (int i = 0; i < n; i++) {
		if (c[i] <= i)
			ans = 0;
		else {
			ans *= (c[i] - i);
			ans %= MOD;
		}
	}
	cout << ans << endl;
}