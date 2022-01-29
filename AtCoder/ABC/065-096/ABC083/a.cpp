#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a + b > c + d)
		cout << "Left" << endl;
	else if (a + b < c + d)
		cout << "Right" << endl;
	else
		cout << "Balanced" << endl;
}