#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a, b;
	cin >> a >> b;
	if (a < b) swap(a, b);
	if (a - b == 1 || (a == 10 && b == 1))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}