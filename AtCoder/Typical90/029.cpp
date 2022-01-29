#include <bits/stdc++.h>
using namespace std;

struct lazysegmenttree {
	int n;
	vector<int> d, lazy;

	lazysegmenttree(int m) {
		n = 1;
		while (n < m) n *= 2;
		d.resize(2 * n - 1);
		lazy.resize(2 * n - 1);
		for (int i = 0; i < 2 * n - 1; i++) d[i] = lazy[i] = 0;
	}

	int treesize() {
		return n;
	}

	void eval(int p, int l, int r) {
		if (lazy[p] != 0) {
			d[p] = lazy[p];
			if (r - l > 1) {
				lazy[2 * p + 1] = lazy[p];
				lazy[2 * p + 2] = lazy[p];
			}
			lazy[p] = 0;
		}
	}

	void update(int a, int b, int x, int p, int l, int r) {
		eval(p, l, r);
		if (b <= l || r <= a) return;
		if (a <= l && r <= b) {
			lazy[p] = max(lazy[p], x);
			eval(p, l, r);
		} else {
			update(a, b, x, 2 * p + 1, l, (l + r) / 2);
			update(a, b, x, 2 * p + 2, (l + r) / 2, r);
			d[p] = max(d[2 * p + 1], d[2 * p + 2]);
		}
	}

	long long int find(int a, int b, int p, int l, int r) {
		if (r <= a || b <= l) return 0;
		eval(p, l, r);
		if (a <= l && r <= b) return d[p];
		long long int vl = find(a, b, 2 * p + 1, l, (l + r) / 2);
		long long int vr = find(a, b, 2 * p + 2, (l + r) / 2, r);
		return max(vl, vr);
	}
};

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int w, n;
	cin >> w >> n;
	lazysegmenttree st(w);
	int m = st.treesize();
	for (int i = 0; i < n; i++) {
		int l, r;
		cin >> l >> r;
		r++;
		int ans = st.find(l, r, 0, 0, m) + 1;
		cout << ans << endl;
		st.update(l, r, ans, 0, 0, m);
	}
}