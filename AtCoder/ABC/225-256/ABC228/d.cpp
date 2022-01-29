#include <bits/stdc++.h>
using namespace std;
long long int a[1048590 / 10000];
int c[1048590 / 10000];

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	const int n = 1 << 4;
	memset(a, -1, sizeof(a));
	int q;
	cin >> q;
	for (int i = 0; i < n; i++) c[i] = i;
	for (int i = 0; i < q; i++) {
		int t;
		long long int x;
		cin >> t >> x;
		if (t == 1) {
			if (a[x % n] == -1) {
				a[x % n] = x;
				c[x % n] = c[(x % n + 1) % n];
			} else {
				a[c[x % n]] = x;
			}
		} else {
			cout << a[x % n] << endl;
		}
	}
}