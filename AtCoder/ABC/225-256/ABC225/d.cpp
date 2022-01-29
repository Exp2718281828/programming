#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, q;
	cin >> n >> q;
	pair<int, int> d[100005];
	for (int i = 0; i < n; i++) d[i] = {-1, -1};
	for (int i = 0; i < q; i++) {
		int c;
		cin >> c;
		if (c == 1) {
			int x, y;
			cin >> x >> y;
			x--, y--;
			d[x].second = y;
			d[y].first = x;
		} else if (c == 2) {
			int x, y;
			cin >> x >> y;
			x--, y--;
			d[x].second = -1;
			d[y].first = -1;
		} else {
			int x;
			cin >> x;
			deque<int> ans;
			ans.push_back(x);
			x--;
			int p = x;
			while (d[p].first != -1) {
				p = d[p].first;
				ans.push_front(p + 1);
			}
			p = x;
			while (d[p].second != -1) {
				p = d[p].second;
				ans.push_back(p + 1);
			}
			cout << ans.size() << ' ';
			for (int j = 0; j < ans.size(); j++) {
				cout << ans[j];
				j == ans.size() - 1 ? cout << endl : cout << ' ';
			}
		}
	}
}