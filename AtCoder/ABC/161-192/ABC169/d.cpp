#include <bits/stdc++.h>
using namespace std;

vector<pair<long long int, long long int>> factorize(long long int N) {
	vector<pair<long long, long long>> res;
	if (N == 1) return {{1, 1}};
	for (long long a = 2; a * a <= N; a++) {
		if (N % a != 0) continue;
		long long ex = 0;
		while (N % a == 0) {
			ex++;
			N /= a;
		}
		res.push_back({a, ex});
	}
	if (N != 1) res.push_back({N, 1});
	return res;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int n;
	cin >> n;
	vector<pair<long long int, long long int>> a;
	a = factorize(n);
	int ans = 0;
	if (n == 1) {
		cout << 0 << endl;
		return 0;
	}
	for (auto x : a) {
		int p = x.second;
		for (int i = 1;; i++) {
			if (i <= p) {
				ans++;
				p -= i;
			} else
				break;
		}
	}
	cout << ans << endl;
}