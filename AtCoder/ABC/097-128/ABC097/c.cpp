#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int k;
	cin >> s >> k;
	map<string, int> m;
	for (int i = 0; i < s.length(); i++)
		for (int j = 0; j < min((unsigned long long)k, s.length() - i); j++) {
			m[s.substr(i, j + 1)] = 1;
		}
	auto itr = m.begin();
	for (int i = 1; i < k; i++) itr++;
	cout << itr->first << endl;
}