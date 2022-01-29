#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	int r = 0, w = 0;
	for (int i = 0; i < n - 1; i++) {
		char c;
		cin >> c;
		if (c == 'R')
			r++;
		else
			w++;
	}
	if (r == k)
		cout << 'W' << endl;
	else
		cout << 'R' << endl;
}