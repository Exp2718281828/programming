#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k;
	int p[100005];
	int ps[100005];
	int m = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int x, y, z;
		cin >> x >> y >> z;
		p[i] = x + y + z;
		ps[i] = p[i];
		m = max(m, p[i]);
	}
	sort(ps, ps + n, greater<int>());
	for (int i = 0; i < n; i++) {
		int q = p[i] + 300;
		if (q >= m) {
			cout << "Yes" << endl;
			continue;
		}
		int ok = n;
		int ng = 0;
		while (ok - ng > 1) {
			int mid = (ng + ok) / 2;
			if (ps[mid] <= q)
				ok = mid;
			else
				ng = mid;
		}
		if (ok + 1 <= k)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}