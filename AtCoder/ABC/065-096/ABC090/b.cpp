#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a, b;
	cin >> a >> b;
	int ans = 0;
	for (int i = a; i <= b; i++) {
		string s = to_string(i);
		if (s[0] == s[4] && s[1] == s[3]) ans++;
	}
	cout << ans << endl;
}