#include <bits/stdc++.h>
using namespace std;

long long intpow(long long int n, int r) {
	long long int ans = 1;
	for (int i = 0; i < r; i++) {
		ans *= n;
	}
	return ans;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	cout << (1800 * m + 100 * n) * intpow(2, m) << endl;
}