#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a, b;
	cin >> a >> b;
	double d = sqrt(a * a + b * b);
	printf("%.16f %.16f\n", a / d, b / d);
}