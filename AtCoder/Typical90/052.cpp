#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	long long int ans = 1;
	for (int i = 0; i < n; i++) {
		int s = 0;
		for (int j = 0; j < 6; j++) {
			int a;
			cin >> a;
			s += a;
		}
		ans *= s;
		ans %= MOD;
	}
	cout << ans << endl;
}