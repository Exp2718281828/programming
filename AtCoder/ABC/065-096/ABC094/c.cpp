#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a[200005], b[200005];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	memcpy(b, a, sizeof(a));
	sort(b, b + n);
	int m1 = b[n / 2 - 1];
	int m2 = b[n / 2];
	for (int i = 0; i < n; i++) {
		if (a[i] < m2)
			cout << m2 << endl;
		else
			cout << m1 << endl;
	}
}