#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, x, m[105];
	cin >> n >> x;
	for (int i = 0; i < n; i++) cin >> m[i];
	sort(m, m + n);
	int s = 0;
	for (int i = 0; i < n; i++) s += m[i];
	x -= s;
	int ans = n;
	ans += x / m[0];
	cout << ans << endl;
}