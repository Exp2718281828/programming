#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	random_device rnd;
	mt19937 mt(rnd());
	uniform_int_distribution<> rand100(0, 11);
	clock_t start = clock();
	int ans = 0;
	for (int i = 0; i < (int)1e8; i++) {
		int c[12] = {};
		for (int j = 0; j < 4; j++) {
			int a = 0, b = 0;
			do {
				a = rand100(mt);
				b = rand100(mt);
			} while (a == b);
			if (c[a] + c[b] > 0) goto EXIT;
			c[a]++;
			c[b]++;
		}
		ans++;
	EXIT:;
	}
	clock_t end = clock();
	// cout << ans << endl;
	printf("Result = %.6f%%\n", ans / (double)1e6);
	std::cout << "Exec time = " << (double)(end - start) / CLOCKS_PER_SEC << "sec.\n";
}

