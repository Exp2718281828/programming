#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int d, n;
	cin >> d >> n;
	cout << (n == 100 ? 101 : n) * (int)pow(100, d) << endl;
}