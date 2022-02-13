#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> l, m;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		int e = 1;
		while (a % 2 == 0) {
			e *= 2;
			a /= 2;
		}
		l.push_back(a);
		m.push_back(e);
	}
	vector<long long int> ms;
	ms.push_back(0);
	for (int i = 0; i < n; i++) ms.push_back(ms[i] + m[i]);
	int q;
	cin >> q;
	while (q--) {
		long long int x;
		cin >> x;
		int p = upper_bound(ms.begin(), ms.end(), x - 1) - ms.begin() - 1;
		cout << l[p] << endl;
	}
}