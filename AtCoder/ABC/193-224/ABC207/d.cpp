#include <bits/stdc++.h>
using namespace std;

const double EPS = 0.000000000001;

int main() {
	int n;
	cin >> n;
	pair<double, double> s[105];
	pair<double, double> t[105];
	for (int i = 0; i < n; i++) cin >> s[i].first >> s[i].second;
	for (int i = 0; i < n; i++) cin >> t[i].first >> t[i].second;
	sort(s, s + n);
	sort(t, t + n);
	double k[36] = {0,		   1,		 0,			 -1,		3 / 5.0,  4 / 5.0,	 -3 / 5.0,	-4 / 5.0,
					4 / 5.0,   3 / 5.0,	 -4 / 5.0,	 -3 / 5.0,	5 / 13.0, 12 / 13.0, -5 / 13.0, -12 / 13.0,
					12 / 13.0, 5 / 13.0, -12 / 13.0, -5 / 13.0, 8 / 17.0, 15 / 17.0, -8 / 17.0, -15 / 17.0,
					15 / 17.0, 8 / 17.0, -15 / 17.0, -8 / 17.0, 7 / 25.0, 24 / 25.0, -7 / 25.0, -24 / 25.0,
					24 / 25.0, 7 / 25.0, -24 / 25.0, -7 / 25.0};
	double l[36] = {1,		  0,		  -1,		 0,			4 / 5.0,   -3 / 5.0,  -4 / 5.0,	  3 / 5.0,
					3 / 5.0,  -4 / 5.0,	  -3 / 5.0,	 4 / 5.0,	12 / 13.0, -5 / 13.0, -12 / 13.0, 5 / 13.0,
					5 / 13.0, -12 / 13.0, -5 / 13.0, 12 / 13.0, 15 / 17.0, -8 / 17.0, -15 / 17.0, 8 / 17.0,
					8 / 17.0, -15 / 17.0, -8 / 17.0, 15 / 17.0, 24 / 25.0, -7 / 25.0, -24 / 25.0, 7 / 25.0,
					7 / 25.0, -24 / 25.0, -7 / 25.0, 24 / 25.0};
	for (int d = 0; d < 36; d++) {
		pair<double, double> u[105];
		for (int i = 0; i < n; i++) {
			u[i].first = s[i].first * l[d] - s[i].second * k[d];
			u[i].second = s[i].first * k[d] + s[i].second * l[d];
		}
		sort(u, u + n);
		bool flag = true;
		double dx = t[0].first - u[0].first;
		double dy = t[0].second - u[0].second;
		for (int i = 1; i < n; i++) {
			if (abs(t[i].first - (u[i].first + dx)) > EPS || abs(t[i].second - (u[i].second + dy)) > EPS) {
				flag = false;
				break;
			}
		}
		if (flag) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}
