#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	set<int> m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		m.insert(a);
	}
	cout << m.size() << endl;
}