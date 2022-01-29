#include <iostream>
using namespace std;

int main() {
	int a, b, c, ans[310], data[4][1005], n;
	cin >> a >> b >> c >> n;
	for (int i = 0; i < 310; i++) ans[i] = 2;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) cin >> data[j][i];
	}
	for (int i = 0; i < n; i++) {
		if (data[3][i] == 1) {
			for (int j = 0; j < 3; j++) ans[data[j][i]] = 1;
		}
	}
	for (int i = 0; i < n; i++) {
		if (ans[data[0][i]] == 1 && ans[data[1][i]] == 1 && ans[data[2][i]] == 2) ans[data[2][i]] = 0;
		if (ans[data[0][i]] == 1 && ans[data[1][i]] == 2 && ans[data[2][i]] == 1) ans[data[1][i]] = 0;
		if (ans[data[0][i]] == 2 && ans[data[1][i]] == 1 && ans[data[2][i]] == 1) ans[data[0][i]] = 0;
	}
	for (int i = 1; i <= a + b + c; i++) cout << ans[i] << endl;
}