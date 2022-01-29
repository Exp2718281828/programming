#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	bool p[105] = {};
	cin >> n;
	int a, b;
	cin >> a >> b;
	p[a] = p[b] = true;
	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		int x;
		cin >> x;
		if (p[x]) {
			cout << "NO" << endl;
			return 0;
		} else {
			p[x] = true;
		}
	}
	cout << "YES" << endl;
}