#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	pair<int, int> p[200005];
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		p[i] = make_pair(-a, i + 1);
	}
	sort(p, p + n);
	cout << p[1].second << endl;
}