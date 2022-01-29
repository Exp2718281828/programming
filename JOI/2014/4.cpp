#include <iostream>
using namespace std;

const int J = 1;
const int O = 2;
const int I = 4;
int a[1005], n;
int mem[8][8][1005];

int dps(int m, int k, int d) {
	if (mem[m][k][d] >= 0) return mem[m][k][d];
	if ((m & k) == 0) {
		mem[m][k][d] = 0;
		return 0;
	}
	if (d == n + 1) {
		mem[m][k][d] = 1;
		return 1;
	}

	int ans;
	if (a[d] == J)
		ans = dps(k, 1, d + 1) + dps(k, 3, d + 1) + dps(k, 5, d + 1) + dps(k, 7, d + 1);
	else if (a[d] == O)
		ans = dps(k, 2, d + 1) + dps(k, 3, d + 1) + dps(k, 6, d + 1) + dps(k, 7, d + 1);
	else
		ans = dps(k, 4, d + 1) + dps(k, 5, d + 1) + dps(k, 6, d + 1) + dps(k, 7, d + 1);
	ans %= 10007;

	mem[m][k][d] = ans;
	return ans;
}

int main() {
	cin >> n;
	a[0] = J;
	for (int x = 0; x < 8; x++)
		for (int y = 0; y < 8; y++)
			for (int z = 0; z < 1005; z++) mem[x][y][z] = -1;
	for (int i = 1; i <= n; i++) {
		char c;
		cin >> c;
		if (c == 'J')
			a[i] = J;
		else if (c == 'O')
			a[i] = O;
		else
			a[i] = I;
	}
	int ans = dps(J, J, 1) % 10007;
	cout << ans << endl;
}