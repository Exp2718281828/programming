#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, q;
	deque<int> d;
	cin >> n >> q;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		d.push_back(a);
	}
	for (int i = 0; i < q; i++) {
		int t, x, y;
		cin >> t >> x >> y;
		x--;
		y--;
		switch (t) {
			case 1:
				swap(d[x], d[y]);
				break;
			case 2: {
				int k = d.back();
				d.pop_back();
				d.push_front(k);
				break;
			}
			default:
				cout << d[x] << endl;
				break;
		}
	}
}