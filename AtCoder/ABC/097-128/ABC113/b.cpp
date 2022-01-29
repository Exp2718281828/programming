#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, t, a;
	cin >> n >> t >> a;
	int d = INF;
	int ans;
	for (int i = 0; i < n; i++) {
		int h;
		cin >> h;
		if (abs(a * 1000 - (t * 1000 - h * 6)) < d) {
			d = abs(a * 1000 - (t * 1000 - h * 6));
			ans = i + 1;
		}
	}
	cout << ans << endl;
}