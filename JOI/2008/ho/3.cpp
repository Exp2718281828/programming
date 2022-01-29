#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 29;

int main() {
	int n, m;
	cin >> n >> m;
	int p[1005];
	for (int i = 0; i < n; i++) cin >> p[i];
	p[n] = 0;
	p[n + 1] = INF;
	vector<int> s;
	for (int i = 0; i < n + 2; i++) {
		for (int j = i; j < n + 2; j++) {
			s.push_back(p[i] + p[j]);
		}
	}
	sort(s.begin(), s.end());
	int ans = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] > m) continue;
		int ok = 0;
		int ng = s.size() - 1;
		int mid;
		while (ng - ok > 1) {
			mid = (ng + ok) / 2;
			if (s[i] + s[mid] <= m)
				ok = mid;
			else
				ng = mid;
		}
		ans = max(ans, s[i] + s[ok]);
	}
	cout << ans << endl;
}