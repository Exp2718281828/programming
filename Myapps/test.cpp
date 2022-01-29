#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8};
	do {
		if ((x[0] * 1000 + x[1] * 100 + x[2] * 10 + x[3]) * 5 == x[4] * 1000 + x[5] * 100 + x[6] * 10 + x[7]) {
			printf(" %d%d%d%d\nx   5\n-----\n %d%d%d%d\n\n", x[0], x[1], x[2], x[3], x[4], x[5], x[6], x[7]);
		}
	} while (next_permutation(x.begin(), x.end()));
}
