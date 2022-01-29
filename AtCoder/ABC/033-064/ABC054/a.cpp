#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a, b;
	cin >> a >> b;
	if (a == 1) a = 14;
	if (b == 1) b = 14;
	if (a > b)
		cout << "Alice" << endl;
	else if (a < b)
		cout << "Bob" << endl;
	else
		cout << "Draw" << endl;
}