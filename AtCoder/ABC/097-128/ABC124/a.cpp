#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a, b;
	cin >> a >> b;
	if (a > b)
		cout << 2 * a - 1 << endl;
	else if (a < b)
		cout << 2 * b - 1 << endl;
	else
		cout << a + b << endl;
}