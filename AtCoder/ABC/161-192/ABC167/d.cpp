#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	long long int k;
	cin >> n >> k;
	int a[200005];
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a[i] = x - 1;
	}
	int v[200005];
	fill(v, v + n, -1);
	int p = 0;
	v[0] = 0;
	for (long long int i = 1; i <= k; i++) {
		int u = a[p];
		p = u;
		if (v[u] == -1) {
			v[u] = i;
		} else {
			int l = i - v[u];
			long long int t = (k - i) / l;
			i += t * l;
		}
		if (i == k) cout << u + 1 << endl;
	}
}