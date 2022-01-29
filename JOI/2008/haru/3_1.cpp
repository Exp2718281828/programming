#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, a, b;
	cin >> n >> a >> b;
	map<pair<int, int>, int> d;
	int c[5005] = {};
	for (int i = 0; i < n; i++) {
		int p, q, r, s;
		cin >> p >> q >> r >> s;
		for (int j = p; j <= r; j++) {
			for (int k = q; k <= s; k++) {
				d[{j, k}]++;
				if (d[{j, k}] > 1) c[d[{j, k}] - 1]--;
				c[d[{j, k}]]++;
			}
		}
	}
	for (int i = 5000;; i--) {
		if (c[i] != 0) {
			cout << i << endl << c[i] << endl;
			return 0;
		}
	}
}