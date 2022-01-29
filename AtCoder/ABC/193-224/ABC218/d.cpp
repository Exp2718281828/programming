#include <bits/stdc++.h>
using namespace std;

const int k = 1000000000;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	pair<int, int> p[2005];
	map<long long int, bool> d;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		p[i] = make_pair(x, y);
		d[x * k + y] = true;
	}
	long long int ans = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (p[i].first != p[j].first && p[i].second != p[j].second &&
				(d.find(p[i].first * k + p[j].second) != d.end()) && (d.find(p[j].first * k + p[i].second) != d.end()))
				ans++;
		}
	}
	ans /= 2;
	cout << ans << endl;
}