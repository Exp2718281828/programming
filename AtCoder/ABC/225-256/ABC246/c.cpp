#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int n, k, x;
	long long int s = 0;
	cin >> n >> k >> x;
	vector<int> r;
	long long int l = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		l += a;
		s += a / x * x;
		r.push_back(a % x);
	}
	sort(r.begin(), r.end(), greater<int>());
	if (k * x < s)
		cout << l - k * x << endl;
	else {
		long long int sb = s;
		for (int i = 0; i < k - sb / x; i++) {
			if (i == n) break;
			s += r[i];
		}
		cout << l - s << endl;
	}
}