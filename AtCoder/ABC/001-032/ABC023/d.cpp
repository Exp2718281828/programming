#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int h[100005], s[100005];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> h[i] >> s[i];
    long long int ng = 0;
    long long int ok = (long long int)1 << 60;
    while (ok - ng > 1) {
        long long int mid = (ng + ok) / 2;
        long long int t[100005] = {};
        for (int i = 0; i < n; i++) {
            if (mid < h[i]) goto NG;
            t[i] = (mid - h[i]) / s[i];
        }
        sort(t, t + n);
        for (int i = 0; i < n; i++) {
            if (t[i] < i) goto NG;
        }
        ok = mid;
        continue;
    NG:
        ng = mid;
    }
    cout << ok << endl;
}