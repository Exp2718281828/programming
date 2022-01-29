#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	if (n <= 125)
		cout << 4 << endl;
	else if (n >= 212)
		cout << 8 << endl;
	else
		cout << 6 << endl;
}