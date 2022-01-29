#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	transform(s.begin(), s.begin() + 1, s.begin(), ::toupper);
	cout << s << endl;
}