#include <bits/stdc++.h>
using namespace std;

int char2int(char c) {
	assert(c >= '0' && c <= '9');
	return c - '0';
}


int main() {
	string s;
	cin >> s;
	bool ans = true;
	if (s[0] == s[1] && s[1] == s[2] && s[2] == s[3]) ans = false;
	if ((char2int(s[1]) - char2int(s[0]) + 10) % 10 == 1 && (char2int(s[2]) - char2int(s[1]) + 10) % 10 == 1 &&
		(char2int(s[3]) - char2int(s[2]) + 10) % 10 == 1)
		ans = false;
	if (ans)
		cout << "Strong" << endl;
	else
		cout << "Weak" << endl;
}