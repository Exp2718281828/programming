#include <bits/stdc++.h>
using namespace std;

int f(int x) {
	return x * x + 2 * x + 3;
}
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	cout << f(f(f(t) + t) + f(f(t))) << endl;
}