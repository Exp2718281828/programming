#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	int ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		while (a % 2 == 0) {
			ans++;
			a /= 2;
		}
	}
	cout << ans << endl;
}