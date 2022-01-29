#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int q;
	stack<string> stk;
	cin >> q;
	for (int i = 0; i < q; i++) {
		string s;
		cin >> s;
		if (s == "READ") {
			string t = stk.top();
			stk.pop();
			cout << t << endl;
		} else {
			stk.push(s);
		}
	}
}