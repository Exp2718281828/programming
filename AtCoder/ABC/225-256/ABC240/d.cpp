#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	stack<pair<int, int>> s;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		pair<int, int> u;
		if (s.empty()) {
			u = {0, 0};
		} else {
			u = s.top();
			s.pop();
		}
		if (u.first != a) {
			if (u.first != 0) s.push(u);
			s.push({a, 1});
			ans++;
		} else {
			if (u.second != a - 1) {
				s.push({u.first, u.second + 1});
				ans++;
			} else {
				ans -= a - 1;
			}
		}
		cout << ans << endl;
	}
}