#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	long long int k;
	int a[200005];
	long long int s[200005] = {};
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) s[i + 1] = s[i] + a[i];
	map<long long int, vector<int>> m;
	for (int i = 0; i < n + 1; i++) m[s[i]].push_back(i);
	long long int ans = 0;
	for (auto it = m.begin(); it != m.end(); it++) {
		long long int x = it->first;
		vector<int> y = it->second;
		for (int p : y) {
			for (int q : m[x + k]) {
				if (p < q) ans++;
			}
		}
	}
	cout << ans << endl;
}