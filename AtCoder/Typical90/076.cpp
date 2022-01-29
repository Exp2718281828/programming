#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	long long int a[200005];
	long long int s = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;
		a[i] = b;
		a[n + i] = b;
		s += b;
	}
	if (s % 10 != 0) {
		cout << "No" << endl;
		return 0;
	}
	s /= 10;
	int x = 0, y = 0;
	long long int t = a[0];
	while (y < 2 * n) {
		if (s == t) {
			cout << "Yes" << endl;
			return 0;
		} else if (s > t) {
			y++;
			t += a[y];
		} else {
			t -= a[x];
			x++;
		}
	}
	cout << "No" << endl;
}