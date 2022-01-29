#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	int p[2005];
	for (int i = 0; i < n; i++) p[i + 1] = i + 1;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		p[x] = y;
	}
	for (int i = 0; i < n; i++) cout << p[i + 1] << endl;
}