#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	int ans = 700;
	for (int i = 0; i < 3;i++)
		if (s[i] == 'o') ans += 100;
	cout << ans << endl;
}