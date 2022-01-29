#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    int t[9][9];
    int ans = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> t[i][j];
    vector<int> p;
    for (int i = 0; i < n - 1; i++) p.push_back(i + 1);
    do {
        int s = 0;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                s += t[0][p[0]];
            } else if (i == n - 1) {
                s += t[p[n - 2]][0];
            } else {
                s += t[p[i - 1]][p[i]];
            }
        }
        if (s == k) ans++;
    } while (next_permutation(p.begin(), p.end()));
    cout << ans << endl;
}