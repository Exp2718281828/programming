#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int ans = 0;
	int s, t;
	cin >> s >> t;
	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j <= 100; j++) {
			for (int k = 0; k <= 100; k++) {
				if (i + j + k <= s && i * j * k <= t) ans++;
			}
		}
	}
	cout << ans << endl;
}	