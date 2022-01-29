#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	int a[200005], b[200005];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b + n, greater<int>());
	int m1 = b[0], m2 = b[1];
	if (m1 == m2) {
		for (int i = 0; i < n; i++) cout << m1 << endl;
	} else {
		for (int i = 0; i < n; i++) {
			if (a[i] == m1)
				cout << m2 << endl;
			else
				cout << m1 << endl;
		}
	}
}