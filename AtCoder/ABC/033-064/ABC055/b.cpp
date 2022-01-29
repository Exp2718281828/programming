#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int ans = 1;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		ans *= i + 1;
		ans %= MOD;
	}
	cout << ans << endl;
}