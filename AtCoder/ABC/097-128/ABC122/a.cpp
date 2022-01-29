#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	char c;
	cin >> c;
	if (c == 'A')
		cout << 'T' << endl;
	else if (c == 'T')
		cout << 'A' << endl;
	else if (c == 'G')
		cout << 'C' << endl;
	else
		cout << 'G' << endl;
}