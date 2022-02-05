#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	vector<int> a;
	int n;
	cin >> n;
	a.resize(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	vector<int> b = a, c = a, d = a;
	reverse(c.begin(), c.end());
	reverse(d.begin(), d.end());
	vector<int> g;
	for (int i = 0; i < n; i++) g.push_back(i + 1);
	
}