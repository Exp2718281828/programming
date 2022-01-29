#include <bits/stdc++.h>
using namespace std;

template <typename T>
vector<T> compress(vector<T> &x) {
	vector<T> xs = x;
	sort(xs.begin(), xs.end());
	xs.erase(unique(xs.begin(), xs.end()), xs.end());
	for (int i = 0; i < x.size(); i++) {
		x[i] = lower_bound(xs.begin(), xs.end(), x[i]) - xs.begin();
	}
	return xs;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, x;
	vector<int> d, c;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		int p, q, r;
		cin >> p >> q >> r;
		d.push_back(p);
		d.push_back(q + 1);
		c.push_back(r);
		c.push_back(-r);
	}
	vector<int> dv = compress(d);
	long long int p[400005] = {};
	for (int i = 0; i < 2 * n; i++) {
		p[d[i]] += c[i];
	}
	for (int i = 0; i < 2 * n; i++) p[i + 1] += p[i];
	long long int ans = 0;
	for (int i = 0; i < 2 * n; i++) {
		long long int k = min((long long)x, p[i]);
		int l = dv[i + 1] - dv[i];
		ans += k * l;
	}
	cout << ans << endl;
}