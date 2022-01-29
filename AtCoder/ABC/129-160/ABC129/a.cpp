#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a, b, c;
	cin >> a >> b >> c;
	cout << a + b + c - max({a, b, c}) << endl;
}