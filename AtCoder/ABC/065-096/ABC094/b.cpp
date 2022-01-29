#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m, x;
	cin >> n >> m >> x;
	int s = 0, t = 0;
	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		if (a < x)
			s++;
		else
			t++;
	}
	cout << min(s, t) << endl;
}