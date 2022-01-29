#include <bits/stdc++.h>
using namespace std;

const long long int INF = 10000000000000000;

int main() {
    long long int n, a[25];
    cin >> n;
    long long int ans = INF;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int bit = 0; bit < (1 << (n - 1)); bit++) {
        vector<long long int> ora;
        long long int tmp = a[0];
        for (int i = 0; i < n - 1; i++) {
            if (bit & (1 << i)) {
                ora.push_back(tmp);
                tmp = a[i + 1];
            } else {
                tmp = tmp | a[i + 1];
            }
        }
        ora.push_back(tmp);
        long long int tmpxor = ora[0];
        for (int i = 1; i < ora.size(); i++) {
            tmpxor = tmpxor ^ ora[i];
        }
        ans = min(ans, tmpxor);
    }
    cout << ans << endl;
}