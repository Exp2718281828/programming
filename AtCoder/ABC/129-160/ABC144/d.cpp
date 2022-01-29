#include <bits/stdc++.h>
using namespace std;

const double PI = 3.141592653589793;

int main() {
	double a, b, x;
	cin >> a >> b >> x;
	double ans;
	if (2 * x > a * a * b) {
		ans = atan((2 * a * a * b - 2 * x) / (a * a * a));
	} else {
		ans = atan(a * b * b / (2 * x));
	}
	ans = 180 * ans / PI;
	printf("%.16f\n", ans);
}