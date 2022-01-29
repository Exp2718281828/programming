#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int a = 0, b = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '0')
			a++;
		else
			b++;
	}
	cout << 2 * min(a, b) << endl;
}