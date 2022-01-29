#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int a[300005];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    long long int s = 0, u = 0;
    for (int i = 0; i < n; i++) {
        s += a[i];
        u += a[i] * a[i];
    }
    long long int x = n * u - s * s;
    cout << x << endl;
}