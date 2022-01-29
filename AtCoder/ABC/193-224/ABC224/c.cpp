#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	pair<long long int, long long int> p[305];
	cin >> n;
	long long int ans = 0;
	for (int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				if (p[i].second == p[j].second) {
					if (p[j].second == p[k].second)
						continue;
					else
						ans++;
				} else {
					if (p[j].second == p[k].second)
						ans++;
					else {
						if ((p[i].first - p[j].first) * (p[j].second - p[k].second) !=
							(p[j].first - p[k].first) * (p[i].second - p[j].second))
							ans++;
					}
				}
			}
		}
	}
	cout << ans << endl;
}