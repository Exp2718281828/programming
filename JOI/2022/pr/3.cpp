#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		cout << s << endl;
	}
}