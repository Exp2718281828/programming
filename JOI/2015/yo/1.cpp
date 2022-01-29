#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a, b, c, d, p;
	cin >> a >> b >> c >> d >> p;
	cout << min(a * p, (p > c ? b + (p - c) * d : b)) << endl;
}