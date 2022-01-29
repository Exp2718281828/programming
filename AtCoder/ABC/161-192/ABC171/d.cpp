#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, q;
	int x[100005] = {};
	long long int s = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		x[a]++;
		s += a;
	}
	cin >> q;
	for (int i = 0; i < q; i++) {
		int b, c;
		cin >> b >> c;
		s += (c - b) * x[b];
		x[c] += x[b];
		x[b] = 0;
		cout << s << endl;
	}
}