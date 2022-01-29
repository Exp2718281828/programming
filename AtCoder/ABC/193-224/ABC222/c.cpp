#include <bits/stdc++.h>
using namespace std;

int janken(char c, char d) {
	if (c == d) return 0;
	if (c == 'G') {
		if (d == 'C') return -1;
		return 1;
	} else if (c == 'C') {
		if (d == 'P') return -1;
		return 1;
	} else {
		if (d == 'G') return -1;
		return 1;
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	string a[105];
	cin >> n >> m;
	for (int i = 0; i < 2 * n; i++) cin >> a[i];
	pair<int, int> win[105];
	for (int i = 0; i < 2 * n; i++) {
		win[i].first = 2 * n - i;
		win[i].second = i + 1;
	}
	for (int i = 0; i < m; i++) {
		sort(win, win + 2 * n, greater<pair<int, int>>());
		for (int j = 0; j < n; j++) {
			int r = janken(a[win[2 * j].second - 1][i], a[win[2 * j + 1].second - 1][i]);
			if (r == -1) win[2 * j].first += 10000;
			if (r == 1) win[2 * j + 1].first += 10000;
		}
	}
	sort(win, win + 2 * n, greater<pair<int, int>>());
	for (int i = 0; i < 2 * n; i++) cout << win[i].second << endl;
}