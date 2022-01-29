#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	long long a, b, c, x, y;
	cin >> a >> b >> c >> x >> y;
	long long ans = 1000000000000;
	for (int i = 0; i <= 2 * max(x, y); i++) {
		long long p, q, k;
		p = (2 * x - i + 1) / 2;
		if (p < 0) p = 0;
		q = (2 * y - i + 1) / 2;
		if (q < 0) q = 0;
		k = a * p + b * q + c * i;
		if (ans > k) ans = k;
	}
	cout << ans << endl;
}