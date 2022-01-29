#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	if (a > b) swap(a, b);
	if (b > c) swap(b, c);
	if (a > b) swap(a, b);
	int ans = INF;
	for (int i = 0; i < 1e4; i++) {
		if (i * c > n) break;
		for (int j = 0; j < 1e4; j++) {
			if (i * c + j * b > n) break;
			if ((n - i * c - j * b) % a == 0) ans = min(ans, i + j + (n - i * c - j * b) / a);
		}
	}
	cout << ans << endl;
}