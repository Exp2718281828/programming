#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	map<int, bool> m;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (m[a])
			m[a] = false;
		else
			m[a] = true;
	}
	int ans = 0;
	for (auto it = m.begin(); it != m.end(); it++) {
		if (it->second) ans++;
	}
	cout << ans << endl;
}