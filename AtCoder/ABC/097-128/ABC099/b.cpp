#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a, b;
	cin >> a >> b;
	int u = b - a;
	int t = u * (u - 1) / 2;
	cout << t - a << endl;
}