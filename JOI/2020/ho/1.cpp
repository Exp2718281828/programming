#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	pair<int, int> a[200005];
	int b[200005];
	map<int, int> o;
	cin >> n;
	for (int i = 0; i < n + 1; i++) {
		cin >> a[i].first;
		a[i].second = i;
	}
	for (int i = 0; i < n; i++) cin >> b[i];
	sort(a, a + n + 1);
	sort(b, b + n);
	int c[200005];
	int m = 0;
	for (int i = 0; i < n; i++) {
		m = max(m, a[i + 1].first - b[i]);
		o[max(a[i + 1].first - b[i], 0)]++;
	}
	c[a[0].second] = m;
	for (int i = 0; i < n; i++) {
		o[max(0, a[i + 1].first - b[i])]--;
		if (o[max(0, a[i + 1].first - b[i])] == 0) {
			o.erase(max(0, a[i + 1].first - b[i]));
		}
		o[max(0, a[i].first - b[i])]++;
		auto itr = o.end();
		itr--;
		// while (itr->second == 0) itr--;
		c[a[i + 1].second] = itr->first;
	}
	for (int i = 0; i < n; i++) cout << c[i] << ' ';
	cout << c[n] << endl;
}