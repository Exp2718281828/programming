#include <cstdio>
#include <iostream>
using namespace std;

int digitnum(int x) {
	int ans = 0;
	while (x != 0) {
		ans += x % 10;
		x /= 10;
	}
	return ans;
}

int main() {
	int n, a, b, ans = 0;
	cin >> n >> a >> b;
	for (int i = 1; i <= n; i++) {
		if (digitnum(i) >= a && digitnum(i) <= b) ans += i;
	}
	cout << ans << endl;
}