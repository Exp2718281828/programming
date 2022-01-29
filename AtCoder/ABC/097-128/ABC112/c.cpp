#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	pair<int, pair<int, int>> d[105];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> d[i].second.first >> d[i].second.second >> d[i].first;
	sort(d, d + n, greater<pair<int, pair<int, int>>>());
	for (int cx = 0; cx <= 100; cx++) {
		for (int cy = 0; cy <= 100; cy++) {
			int ch = d[0].first + abs(d[0].second.first - cx) + abs(d[0].second.second - cy);
			for (int i = 1; i < n; i++) {
				if (d[i].first != max(ch - abs(d[i].second.first - cx) - abs(d[i].second.second - cy), 0)) goto EXIT;
			}
			cout << cx << ' ' << cy << ' ' << ch << endl;
			return 0;
		EXIT:;
		}
	}
	assert(0);
}