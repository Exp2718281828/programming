#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q;
	int a[100005], b[100005];
	cin >> n;
	for (int i = 0; i < n; i++) {
		int c, p;
		cin >> c >> p;
		a[0] = 0;
		b[0] = 0;
		if (c == 1) {
			a[i + 1] = a[i] + p;
			b[i + 1] = b[i];
		} else {
			a[i + 1] = a[i];
			b[i + 1] = b[i] + p;
		}
	}
	cin >> q;
	for (int i = 0; i < q; i++) {
		int l, r;
		cin >> l >> r;
		l--;
		r--;
		cout << a[r + 1] - a[l] << ' ' << b[r + 1] - b[l] << endl;
	}
}
