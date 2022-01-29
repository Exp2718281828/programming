#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;

struct segmenttree {
	int n;
	vector<int> d;

	segmenttree(int m) {
		n = 1;
		while (n < m) n *= 2;
		d.resize(2 * n - 1);
		for (int i = 0; i < 2 * n - 1; i++) d[i] = INF;
	}

	int treesize() {
		return n;
	}

	void update(int p, int x) {
		p += n - 1;
		d[p] = x;
		while (p > 0) {
			p = (p - 1) / 2;
			d[p] = min(d[2 * p + 1], d[2 * p + 2]);
		}
	}

	int find(int a, int b, int p, int l, int r) {
		if (r <= a || b <= l) return INF;
		if (a <= l && r <= b) return d[p];
		int vl = find(a, b, 2 * p + 1, l, (l + r) / 2);
		int vr = find(a, b, 2 * p + 2, (l + r) / 2, r);
		return min(vl, vr);
	}
};

int main() {
	int n;
	cin >> n;
	segmenttree st(n);
	int m = st.treesize();
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		st.update(i, a);
	}
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			int k = st.find(i, j + 1, 0, 0, m) * (j - i + 1);
			ans = max(ans, k);
		}
	}
	cout << ans << endl;
}