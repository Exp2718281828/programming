#include <bits/stdc++.h>
using namespace std;

struct segmenttree {
	int n;
	vector<long long int> d;

	segmenttree(int m) {
		n = 1;
		while (n < m) n *= 2;
		d.resize(2 * n - 1);
		for (int i = 0; i < 2 * n - 1; i++) d[i] = 0;
	}

	int treesize() {
		return n;
	}

	void update(int p, int x) {
		p += n - 1;
		d[p] += x;
		while (p > 0) {
			p = (p - 1) / 2;
			d[p] = d[2 * p + 1] + d[2 * p + 2];
		}
	}

	long long int find(int a, int b, int p, int l, int r) {
		if (r <= a || b <= l) return 0;
		if (a <= l && r <= b) return d[p];
		long long int vl = find(a, b, 2 * p + 1, l, (l + r) / 2);
		long long int vr = find(a, b, 2 * p + 2, (l + r) / 2, r);
		return vl + vr;
	}
};

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, q;
	cin >> n >> q;
	segmenttree st(n);
	int m = st.treesize();
	for (int i = 0; i < q; i++) {
		int c, x, y;
		cin >> c >> x >> y;
		if (c == 0) {
			st.update(x - 1, y);
		} else {
			cout << st.find(x - 1, y, 0, 0, m) << endl;
		}
	}
}