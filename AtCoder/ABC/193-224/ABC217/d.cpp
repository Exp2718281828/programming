#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int l, q;
	cin >> l >> q;
	set<int> d;
	d.insert(0);
	d.insert(l);
	for (int i = 0; i < q; i++) {
		int c, x;
		cin >> c >> x;
		if (c == 1) {
			d.insert(x);
		} else {
			auto y = d.lower_bound(x);
			int b = *y;
			y--;
			int a = *y;
			cout << b - a << endl;
		}
	}
}