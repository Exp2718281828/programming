#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int x, y;
	cin >> x >> y;
	cout << max((y - x + 9) / 10, 0) << endl;
}