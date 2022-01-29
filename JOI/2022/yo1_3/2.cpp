#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int s, a, b;
	cin >> s >> a >> b;
	int ans = 250;
	while (a < s) {
		ans += 100;
		a += b;
	}
	cout << ans << endl;
}