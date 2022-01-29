#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, p[1005];
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> p[i];
    sort(p, p + n);
    int s = 0;
    for (int i = 0; i < k; i++) s += p[i];
    cout << s << endl;
}