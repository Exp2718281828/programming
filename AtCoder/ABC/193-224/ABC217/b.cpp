#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s[3];
	cin >> s[0] >> s[1] >> s[2];
	sort(s, s + 3);
	if (s[0] != "ABC")
		cout << "ABC" << endl;
	else if (s[1] != "AGC")
		cout << "AGC" << endl;
	else if (s[2] != "AHC")
		cout << "AHC" << endl;
	else
		cout << "ARC" << endl;
}