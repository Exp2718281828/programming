#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, q;
	int a[200005];
	cin >> n >> q;
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	for (int i = 0; i < q; i++) {
		int x;
		cin >> x;
		int d = lower_bound(a, a + n, x) - a;
		cout << n - d << endl;
	}
}