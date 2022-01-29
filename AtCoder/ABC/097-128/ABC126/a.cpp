#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k;
	string s;
	cin >> n >> k >> s;
	s[k - 1] += 32;
	cout << s << endl;
}