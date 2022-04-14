#include <bits/stdc++.h>
using namespace std;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	string t;
	cin >> n >> t;
	int x = 0, y = 0;
	int r = 1000000;
	for (int i = 0; i < n; i++) {
		if (t[i] == 'S') {
			x += dx[r % 4], y += dy[r % 4];
		} else {
			r--;
		}
	}
	cout << x << ' ' << y << endl;
}