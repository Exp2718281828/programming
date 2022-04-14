#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int q;
	deque<pair<int, int>> que;
	cin >> q;
	while (q--) {
		int t;
		cin >> t;
		if (t == 1) {
			int x, c;
			cin >> x >> c;
			que.push_back({x, c});
		} else {
			int c;
			cin >> c;
			long long int ans = 0;
			while (c > 0) {
				pair<int, int> u = que.front();
				que.pop_front();
				if (c > u.second) {
					ans += (long long)u.second * u.first;
					c -= u.second;
				} else {
					ans += (long long)c * u.first;
					if (u.second != c) que.push_front({u.first, u.second - c});
					c = 0;
				}
			}
			cout << ans << endl;
		}
	}
}