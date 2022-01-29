#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	vector<int> a[200005];
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int k;
		cin >> k;
		for (int j = 0; j < k; j++) {
			int b;
			cin >> b;
			a[i].push_back(b);
		}
	}
	
}