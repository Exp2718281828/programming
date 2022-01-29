#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, w;
	cin >> n >> w;
	pair<long long int, int> v[300005];
	for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
	sort(v, v + n, greater<pair<int, int>>());
	long long int ans = 0;
	int j = 0;
	while (w > 0 && j < n) {
		if (v[j].second <= w) {
			ans += v[j].first * v[j].second;
			w -= v[j].second;
			j++;
		} else {
			ans += v[j].first * w;
			w = 0;
		}
	}
	cout << ans << endl;
}