#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	tuple<string, int, int> d[105];
	cin >> n;
	for (int i = 0; i < n; i++) {
		int p;
		string s;
		cin >> s >> p;
		d[i] = make_tuple(s, -p, i + 1);
	}
	sort(d, d + n);
	for (int i = 0; i < n; i++) {
		cout << get<2>(d[i]) << endl;
	}
}