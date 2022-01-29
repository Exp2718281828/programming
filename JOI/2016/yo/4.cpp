#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;

int main() {
	// cin.tie(0);
	// ios::sync_with_stdio(false);
	int n, q;
	long long int t;
	cin >> n >> t >> q;
	long long int a[100005];
	int d[100005];
	for (int i = 0; i < n; i++) cin >> a[i] >> d[i];
	vector<int> x;
	for (int i = 0; i < q; i++) {
		int y;
		cin >> y;
		x.push_back(y - 1);
	}
	long long int l[100005], r[100005];
	int p = -1;
	for (int i = 0; i < n; i++) {
		if (d[i] == 1) {
			p = i;
			l[i] = i;
		} else {
			l[i] = p;
		}
	}
	p = INF;
	for (int i = n - 1; i >= 0; i--) {
		if (d[i] == 2) {
			p = i;
			r[i] = i;
		} else {
			r[i] = p;
		}
	}
	for (int y : x) {
		if (d[y] == 1) {
			int z = r[y];
			if (z == INF) {
				cout << a[y] + t << endl;
			} else {
				long long int tp = (a[z - 1] - a[y]) + (a[z] - a[z - 1]) / 2;
				if (tp > t)
					cout << a[y] + t << endl;
				else
					cout << a[y] + tp << endl;
			}
		} else {
			int z = l[y];
			if (z == -1) {
				cout << a[y] - t << endl;
			} else {
				long long int tp = (a[y] - a[z + 1]) + (a[z + 1] - a[z]) / 2;
				if (tp > t)
					cout << a[y] - t << endl;
				else
					cout << a[y] - tp << endl;
			}
		}
	}
}