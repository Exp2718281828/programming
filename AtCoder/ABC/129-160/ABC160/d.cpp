#include <bits/stdc++.h>
using namespace std;
int d[2005][2005];

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	int x, y;
	cin >> n >> x >> y;
	x--, y--;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			d[i][j] = min(j - i, abs(i - x) + abs(j - y) + 1);
		}
	}
	int ans[2005] = {};
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			ans[d[i][j]]++;
		}
	}
	for (int i = 1; i < n; i++) cout << ans[i] << endl;
}