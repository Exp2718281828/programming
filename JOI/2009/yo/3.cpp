#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<pair<int, int>> d;
	int c = 0;
	int m = 0;
	d.push_back({-1, 1});
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a != c) {
			if (c != 0) d.push_back({c, m});
			c = a;
			m = 0;
		}
		m++;
	}
	d.push_back({c, m});
	d.push_back({-1, 1});
	int ans = INF;
	for (int i = 1; i < d.size() + 2; i++) {
		int f = 0;
		int x, y;
		int s = 0;
		bool a = false;
		if (d[i].second == 1 && d[i - 1].first == d[i + 1].first) {
			x = i - 1;
			y = i + 1;
			int w = d[x].second + d[y].second + 1;
			if (w < 4) goto END;
			s = w;
			x--, y++;
		} else {
		AGAIN:
			s = 0;
			if (!a) {
				a = true;
				x = i - 1;
				y = i;
				int w = d[x].second + 1;
				if (w < 4) goto END;
				s = w;
				if (d[x].second == 1)
					x--;
				else {
					d[x].second--;
					f = x;
				}
				y++;
			} else {
				a = false;
				x = i;
				y = i + 1;
				int w = d[y].second + 1;
				if (w < 4) goto END;
				s = w;
				x--;
				if (d[y].second == 1)
					y++;
				else {
					d[y].second--;
					f = -y;
				}
			}
		}
		while (1) {
			if (d[x].first != d[y].first || d[x].second + d[y].second < 4) break;
			s += d[x].second + d[y].second;
			x--, y++;
		}
	END:
		ans = min(ans, n - s);
		if (f > 0)
			d[f].second++;
		else if (f < 0)
			d[-f].second++;
		f = 0;
		if (a) goto AGAIN;
	}
	cout << ans << endl;
}