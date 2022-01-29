#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a, b, x;
	cin >> a >> b >> x;
	if (a <= x && x <= a + b)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}