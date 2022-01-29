#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	int k[15];
	vector<int> s[15];
	int p[15];
	int ans = 0;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> k[i];
		for (int j = 0; j < k[i]; j++) {
			int S;
			cin >> S;
			s[i].push_back(S - 1);
		}
	}
	for (int i = 0; i < m; i++) cin >> p[i];
	for (int bit = 0; bit < (1 << n); bit++) {
		for (int i = 0; i < m; i++) {
			int t = 0;
			for (int x : s[i]) {
				if (bit & (1 << x)) t++;
			}
			if (t % 2 != p[i]) goto EXIT;
		}
		ans++;
	EXIT:;
	}
	cout << ans << endl;
}