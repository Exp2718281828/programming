#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	vector<int> c = {0, 360};
	cin >> n;
	int s = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		s += a;
		s %= 360;
		c.push_back(s);
	}
	sort(c.begin(), c.end());
	int ans = 0;
	for (int i = 0; i < n + 1; i++) {
		ans = max(ans, c[i + 1] - c[i]);
	}
	cout << ans << endl;
}