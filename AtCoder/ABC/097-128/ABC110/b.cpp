#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	int w[105], z[105];
	for (int i = 0; i < n; i++) cin >> w[i];
	for (int i = 0; i < m; i++) cin >> z[i];
	if (max(x, *max_element(w, w + n)) < min(y, *min_element(z, z + m)))
		cout << "No War" << endl;
	else
		cout << "War" << endl;
}