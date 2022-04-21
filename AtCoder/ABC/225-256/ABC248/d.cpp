#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	vector<int> d[200005];
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		d[a].push_back(i);
	}
	int q;
	cin >> q;
	while (q--) {
		int l, r, x;
		cin >> l >> r >> x;
		l--;
		int s = lower_bound(d[x].begin(), d[x].end(), l) - d[x].begin();
		int g = lower_bound(d[x].begin(), d[x].end(), r) - d[x].begin();
		cout << g - s << endl;
	}
}