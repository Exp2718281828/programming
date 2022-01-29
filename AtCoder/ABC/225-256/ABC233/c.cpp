#include <bits/stdc++.h>
using namespace std;

long long int n, x;
vector<vector<int>> a;

long long int dp(long long int y, int p) {
	if (p == n) {
		if (x == y)
			return 1;
		else
			return 0;
	}
	long long int ans = 0;
	for (int q : a[p]) {
		long long int z = (__int128)y * q;
		if (z <= x) ans += dp(z, p + 1);
	}
	return ans;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		int l;
		cin >> l;
		vector<int> t;
		for (int j = 0; j < l; j++) {
			int z;
			cin >> z;
			t.push_back(z);
		}
		a.push_back(t);
	}
	cout << dp(1, 0) << endl;
}