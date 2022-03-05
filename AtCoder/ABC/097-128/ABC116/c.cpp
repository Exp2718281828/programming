#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	int h[105] = {};
	cin >> n;
	for (int i = 0; i < n; i++) cin >> h[i + 1];
	int ans = 0;
	for (int i = 0; i < 105; i++) {
		for (int j = 0; j < n + 1; j++) {
			if (h[j] < i && h[j + 1] >= i) ans++;
		}
	}
	cout << ans << endl;
}