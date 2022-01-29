#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y, a, b, c;
	cin >> x >> y >> a >> b >> c;
	int p[100005], q[100005], r[100005];
	for (int i = 0; i < a; i++) cin >> p[i];
	for (int i = 0; i < b; i++) cin >> q[i];
	for (int i = 0; i < c; i++) cin >> r[i];
	sort(p, p + a, greater<int>());
	sort(q, q + b, greater<int>());
	sort(r, r + c, greater<int>());
	vector<int> z;
	for (int i = 0; i < x; i++) z.push_back(p[i]);
	for (int i = 0; i < y; i++) z.push_back(q[i]);
	for (int i = 0; i < c; i++) z.push_back(r[i]);
	sort(z.begin(), z.end(), greater<int>());
	long long int s = 0;
	for (int i = 0; i < x + y; i++) s += z[i];
	cout << s << endl;
}