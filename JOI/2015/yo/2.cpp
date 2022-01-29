#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	int a[105];
	int ans[105] = {};
	cin >> n >> m;
	for (int i = 0; i < m; i++) cin >> a[i];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int b;
			cin >> b;
			if (b == a[i])
				ans[j + 1]++;
			else
				ans[a[i]]++;
		}
	}
	for (int i = 0; i < n; i++) cout << ans[i + 1] << endl;
}