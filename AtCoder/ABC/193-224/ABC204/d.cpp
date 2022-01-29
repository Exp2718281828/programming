#include <bits/stdc++.h>
using namespace std;

int t[105];
int n;
map<tuple<int, int, int>, pair<int, int>> mem;

bool dp(int u, int m, int a, int b) {
	if (mem.count(make_tuple(m, a, b)) == 1) {
		if (mem[make_tuple(m, a, b)].second <= u) return true;
		if (mem[make_tuple(m, a, b)].first >= u) return false;
	}
	if (m == n) {
		if (u >= max(a, b)) {
			mem[make_tuple(m, a, b)] = make_pair(0, u);
			return true;
		} else {
			mem[make_tuple(m, a, b)] = make_pair(u, 100000);
			return false;
		}
	}
	if (u >= a + t[m] && dp(u, m + 1, a + t[m], b)) {
		mem[make_tuple(m, a, b)] = make_pair(0, u);
		return true;
	}
	if (u >= b + t[m] && dp(u, m + 1, a, b + t[m])) {
		mem[make_tuple(m, a, b)] = make_pair(0, u);
		return true;
	}
	mem[make_tuple(m, a, b)] = make_pair(u, 100000);
	return false;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> t[i];
	sort(t, t + n, greater<int>());
	int s = 0;
	for (int i = 0; i < n; i++) s += t[i];
	int ok = s;
	int ng = s / 2 - 1;
	while (ok - ng > 1) {
		int mid = (ok + ng) / 2;
		if (dp(mid, 0, 0, 0))
			ok = mid;
		else
			ng = mid;
	}
	cout << ok << endl;
}