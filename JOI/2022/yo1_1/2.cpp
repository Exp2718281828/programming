#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int x, y, z;
	cin >> x >> y >> z;
	if (x + y <= z)
		cout << 1 << endl;
	else
		cout << 0 << endl;
}