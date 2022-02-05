#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, a[200005];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	int p = -1;
	for (int i = 0; i < n - 1; i++) {
		if (a[i] > a[i + 1]) {
			p = i;
			break;
		}
	}
	int x;
	if (p == -1)
		x = a[n - 1];
	else
		x = a[p];
	for (int i = 0; i < n; i++) {
		if (a[i] != x) cout << a[i] << ' ';
	}
	cout << endl;
}