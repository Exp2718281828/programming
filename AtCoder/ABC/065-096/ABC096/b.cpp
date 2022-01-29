#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a, b, c, k;
	cin >> a >> b >> c >> k;
	if (a > b) swap(a, b);
	if (b > c) swap(b, c);
	cout << a + b + c * (int)pow(2, k) << endl;
}