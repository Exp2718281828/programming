#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a, x, b, y, c, z;
	cin >> a >> x >> b >> y >> c >> z;
	if (a == b)
		cout << c;
	else if (b == c)
		cout << a;
	else
		cout << b;
	cout << ' ';
	if (x == y)
		cout << z << endl;
	else if (y == z)
		cout << x << endl;
	else
		cout << y << endl;
}