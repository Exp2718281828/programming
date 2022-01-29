#include <bits/stdc++.h>
using namespace std;

bool flag[1000000] = {};

int main() {
    long long int n;
    cin >> n;
    long long int ansdiff = 0;
    for (long long int a = 2;; a++) {
        long long int c = a;
        if (a <= 100005 && flag[a]) continue;
        while (c <= sqrt(n)) {
            flag[c] = true;
            c *= a;
        }
        int x = floor(log((double)n) / log((double)a)) - 1;
        if (x <= 0) break;
        ansdiff += x;
    }
    long long int ans = n - ansdiff;
    cout << ans << endl;
}