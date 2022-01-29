#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
int ans[3005][3005];

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	int a[3005], b[3005];
	cin >> n;
	for (int i = 0; i < 3003; i++) ans[n - 1][i] = 1;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];
	for (int i = n - 1; i > 0; i--) {
		long long int s = 0;
		for (int j = b[i]; j >= a[i - 1]; j--) {
			if (j >= a[i]) s += ans[i][j];
			s %= MOD;
			if (j <= b[i - 1]) {
				ans[i - 1][j] += s;
				ans[i - 1][j] %= MOD;
			}
		}
	}
	long long int k = 0;
	for (int i = a[0]; i <= b[0]; i++) {
		k += ans[0][i];
		k %= MOD;
	}
	cout << k << endl;
}