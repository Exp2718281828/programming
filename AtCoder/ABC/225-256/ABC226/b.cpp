#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	set<vector<int>> m;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int l;
		vector<int> a;
		cin >> l;
		for (int j = 0; j < l; j++) {
			int x;
			cin >> x;
			a.push_back(x);
		}
		m.insert(a);
	}
	cout << m.size() << endl;
}