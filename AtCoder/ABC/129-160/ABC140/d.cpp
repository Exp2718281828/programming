#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    vector<int> l, r;
    int gap = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] != s[i + 1]) gap++;
    }
    int ans = min(n - 1, n - 1 - gap + 2 * k);
    cout << ans << endl;
}