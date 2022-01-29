#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	long long int a[205];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	map<int, vector<vector<int>>> d;
	int m = min(n, 8);
	for (int bit = 1; bit < (1 << m); bit++) {
		vector<int> x;
		long long int s = 0;
		for (int i = 0; i < m; i++) {
			if (bit & (1 << i)) {
				x.push_back(i + 1);
				s += a[i];
			}
		}
		s %= 200;
		d[s].push_back(x);
	}
	for (auto it = d.begin(); it != d.end(); it++) {
		auto x = it->second;
		if (x.size() >= 2) {
			cout << "Yes" << endl;
			vector<int> y = x[0], z = x[1];
			cout << y.size() << ' ';
			for (int i = 0; i < y.size(); i++) {
				cout << y[i];
				i == y.size() - 1 ? cout << endl : cout << ' ';
			}
			cout << z.size() << ' ';
			for (int i = 0; i < z.size(); i++) {
				cout << z[i];
				i == z.size() - 1 ? cout << endl : cout << ' ';
			}
			return 0;
		}
	}
	cout << "No" << endl;
}