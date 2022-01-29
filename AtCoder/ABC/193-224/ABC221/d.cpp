#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	map<int, int> d;
	cin >> n;
	d[0] = 0;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		d[a]++;
		d[a + b]--;
	}
	int ans[200005] = {};
	int p = 0;
	for (auto i = d.begin(); i != d.end(); i++) {
		i++;
		auto j = i;
		i--;
		p += i->second;
		ans[p] += j->first - i->first;
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i + 1];
		i == n - 1 ? cout << endl : cout << ' ';
	}
}