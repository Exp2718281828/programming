#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	char a, b, c, d;
	cin >> a >> b >> c >> d;
	if ((a == '.' && b == '#' && c == '#' && d == '.') || (a == '#' && b == '.' && c == '.' && d == '#'))
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
}