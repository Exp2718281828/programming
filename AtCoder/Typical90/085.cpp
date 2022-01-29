#include <bits/stdc++.h>
using namespace std;

vector<__int128> divisors(long long n) {
	vector<__int128> res;
	for (long long i = 1; i * i <= n; ++i) {
		if (n % i == 0) {
			res.push_back(i);
			if (n / i != i) res.push_back(n / i);
		}
	}
	sort(res.begin(), res.end());
	return res;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int k;
	cin >> k;
	long long int ans = 0;
	vector<__int128> c = divisors(k);
	for (__int128 x : c) {
		if (x * x * x > k) break;
		long long int y = k / x;
		vector<__int128> d = divisors(y);
		int p = lower_bound(d.begin(), d.end(), x) - d.begin();
		int ok = 0;
		int ng = d.size() - 1;
		while (ng - ok > 1) {
			int mid = (ok + ng) / 2;
			if (d[mid] * d[mid] <= y)
				ok = mid;
			else
				ng = mid;
		}
		int q = ok;
		ans += max(0, q - p + 1);
	}
	cout << ans << endl;
}