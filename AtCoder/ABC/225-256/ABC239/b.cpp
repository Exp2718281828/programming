#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int x;
	cin >> x;
	if (x >= 0)
		cout << x / 10 << endl;
	else
		cout << (x - 9) / 10 << endl;
}