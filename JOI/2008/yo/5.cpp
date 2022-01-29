#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	int a[10][10000], c, r, ans = 0;
	cin >> r >> c;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++) cin >> a[i][j];
	for (int cbit = 0; cbit < (1 << r); cbit++) {
		int m = 0;
		for (int i = 0; i < c; i++) {
			int k = 0, l = 0;
			for (int j = 0; j < r; j++) {
				if ((((cbit & (1 << j)) == 0) && a[j][i] == 0) || (((cbit & (1 << j)) >= 1) && a[j][i] == 1)) {
					k++;
					// if (cbit == 7) cout << "{" << j << ", " << i << "} ";
				}
			}
			l = max(k, r - k);
			// if (cbit == 7) cout << k << " ";
			m += l;
		}
		if (ans < m) ans = m;
	}
	cout << ans << endl;
}