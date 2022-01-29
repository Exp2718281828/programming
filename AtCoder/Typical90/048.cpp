#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k;
	vector<int> p;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		p.push_back(b);
		p.push_back(a - b);
	}
	sort(p.begin(), p.end(), greater<int>());
	long long int ans = 0;
	for (int i = 0; i < k; i++) ans += p[i];
	cout << ans << endl;
}