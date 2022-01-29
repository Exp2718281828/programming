#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    pair<int, string> m[1005];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> m[i].second >> m[i].first;
    sort(m, m + n);
    cout << m[n - 2].second << endl;
}