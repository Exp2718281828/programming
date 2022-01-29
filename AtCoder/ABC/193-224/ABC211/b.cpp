#include <bits/stdc++.h>
using namespace std;

int main() {
	string s[4];
	for (int i = 0; i < 4; i++) cin >> s[i];
	sort(s, s + 4);
	if (s[0] == "2B" && s[1] == "3B" && s[2] == "H" && s[3] == "HR")
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}