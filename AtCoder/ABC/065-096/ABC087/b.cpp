#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int a, b, c, x, ans = 0;
	cin >> a >> b >> c >> x;
	for (int i = 0; i <= a; i++) {
		for (int j = 0; j <= b; j++) {
			for (int k = 0; k <= c; k++) {
				if (500 * i + 100 * j + 50 * k == x) ans++;
			}
		}
	}
	cout << ans << endl;
}