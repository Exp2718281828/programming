#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a, b;
	char c;
	cin >> a >> c >> b;
	if (c == '+')
		cout << a + b << endl;
	else
		cout << a - b << endl;
}