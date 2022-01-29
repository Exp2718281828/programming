#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int x, long long int y) {
	if (x % y == 0) {
		return y;
	} else {
		return gcd(y, x % y);
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int a, b;
	cin >> a >> b;
	if (a > b) swap(a, b);
	if ((__int128)a * b / gcd(a, b) > 1000000000000000000LL)
		cout << "Large" << endl;
	else
		cout << a / gcd(a, b) * b << endl;
}