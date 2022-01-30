#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	string s;
	cin >> n >> s;
	list<int> q;
	q.push_back(0);
	auto it = q.begin();
	for (int i = 0; i < n; i++) {
		if (s[i] == 'L') {
			q.insert(it, i + 1);
			it--;
		} else {
			it++;
			q.insert(it, i + 1);
			it--;
		}
	}
	it = q.begin();
	for (int i = 0; i < n + 1; i++) {
		cout << *it;
		if (i == n) {
			cout << endl;
		} else {
			cout << ' ';
			it++;
		}
	}
}