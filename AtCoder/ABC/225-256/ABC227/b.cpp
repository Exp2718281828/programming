#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	bool c[1005] = {};
	int n;
	int ans = 0;
	cin >> n;
	for (int i = 1; i <= 1000; i++) {
		for (int j = 1; j <= 1000; j++) {
			if (4 * i * j + 3 * i + 3 * j <= 1000)
				c[4 * i * j + 3 * i + 3 * j] = true;
			else
				continue;
		}
	}
	for (int i = 0; i < n; i++) {
		int s;
		cin >> s;
		if (!c[s]) ans++;
	}
	cout << ans << endl;
}