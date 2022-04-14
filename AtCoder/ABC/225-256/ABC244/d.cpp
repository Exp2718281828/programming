#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	char a, b, c, s, t, u;
	cin >> a >> b >> c >> s >> t >> u;
	int n = 0;
	if (b == 'R') {
		swap(a, b);
		n++;
	}
	if (c == 'R') {
		swap(a, c);
		n++;
	}
	if (b == 'B') {
		swap(b, c);
		n++;
	}
	if (t == 'R') {
		swap(s, t);
		n++;
	}
	if (u == 'R') {
		swap(s, u);
		n++;
	}
	if (t == 'B') {
		swap(t, u);
		n++;
	}
	//cout << a << b << c << s << t << u << endl;
	if (n % 2 == 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}