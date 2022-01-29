#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	map<int, vector<int>> d;
	int n, q;
	cin >> n >> q;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		d[a].push_back(i + 1);
	}
	for (int i = 0; i < q; i++) {
		int x, k;
		cin >> x >> k;
		if (d[x].size() < k)
			cout << -1 << endl;
		else
			cout << d[x][k - 1] << endl;
	}
}