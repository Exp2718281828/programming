#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	const int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
	const int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
	for (int i = 0; i < 8; i++) {
		int px = x1 + dx[i], py = y1 + dy[i];
		if ((x2 - px) * (x2 - px) + (y2 - py) * (y2 - py) == 5) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}