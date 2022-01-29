#include <bits/stdc++.h>
using namespace std;
const long long int INF = 1LL << 62;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k;
	pair<int, int> p[55];
	long long int ans = INF;
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			for (int l = j; l < n; l++) {
				for (int m = l; m < n; m++) {
					int lx = min({p[i].first, p[j].first, p[l].first, p[m].first});
					int rx = max({p[i].first, p[j].first, p[l].first, p[m].first});
					int ly = min({p[i].second, p[j].second, p[l].second, p[m].second});
					int ry = max({p[i].second, p[j].second, p[l].second, p[m].second});
					int c = 0;
					for (int o = 0; o < n; o++) {
						if (p[o].first >= lx && p[o].first <= rx && p[o].second >= ly && p[o].second <= ry) c++;
					}
					if (c >= k) ans = min(ans, (long long)(rx - lx) * (ry - ly));
				}
			}
		}
	}
	cout << ans << endl;
}