#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	long long int h;
	cin >> h;
	double ans = sqrt(h * (12800000 + h));
	printf("%.16f\n", ans);
}