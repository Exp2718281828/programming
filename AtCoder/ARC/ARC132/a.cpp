#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	int r[100005], c[100005];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> r[i];
	for (int i = 0; i < n; i++) cin >> c[i];
	int q;
	cin >> q;
	while (q--) {
		int x, y;
		cin >> x >> y;
		x--, y--;
		if (r[x] + c[y] > n)
			cout << '#';
		else
			cout << '.';
	}
	cout << endl;
}