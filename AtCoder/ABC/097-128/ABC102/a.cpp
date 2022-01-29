#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	if (n % 2 == 0)
		cout << n << endl;
	else
		cout << 2 * n << endl;
}