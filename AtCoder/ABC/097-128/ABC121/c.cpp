#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int n, m;
	pair<long long int, long long int> p[100005];
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
	sort(p, p + n);
	long long int ans = 0;
	for (int i = 0;; i++) {
		if (m > p[i].second) {
			m -= p[i].second;
			ans += p[i].first * p[i].second;
		} else {
			ans += m * p[i].first;
			break;
		}
	}
	cout << ans << endl;
}