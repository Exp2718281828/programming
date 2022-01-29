#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, p;
	cin >> n >> p;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a < p) ans++;
	}
	cout << ans << endl;
}