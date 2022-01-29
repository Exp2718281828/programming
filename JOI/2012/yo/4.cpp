#include <iostream>
using namespace std;

int k, n, a[105];
int mem[4][4][105];

int dps(int x, int y, int d) {
	if (mem[x][y][d] >= 0) return mem[x][y][d];
	if (d == n + 1) {
		mem[x][y][d] = 1;
		return 1;
	} else {
		if (a[d] == 0) {
			if (x == y && x != 0) {
				int ans = 0;
				for (int i = 1; i <= 3; i++) {
					if (x != i) {
						ans += dps(y, i, d + 1);
					}
				}
				if (ans >= 10000) ans %= 10000;
				mem[x][y][d] = ans;
				return ans;
			} else {
				int ans = 0;
				for (int i = 1; i <= 3; i++) {
					ans += dps(y, i, d + 1);
				}
				if (ans >= 10000) ans %= 10000;
				mem[x][y][d] = ans;
				return ans;
			}
		} else {
			if (x == y && x == a[d]) {
				return 0;
				mem[x][y][d] = 0;
			} else {
				int ans = dps(y, a[d], d + 1);
				if (ans >= 10000) ans %= 10000;
				mem[x][y][d] = ans;
				return ans;
			}
		}
	}
}

int main() {
	for (int i = 0; i <= 3; i++)
		for (int j = 0; j <= 3; j++)
			for (int l = 0; l < 105; l++) mem[i][j][l] = -1;
	cin >> n >> k;
	for (int i = 0; i < k; i++) {
		int d;
		cin >> d;
		cin >> a[d];
	}
	cout << dps(0, 0, 1) % 10000 << endl;
}