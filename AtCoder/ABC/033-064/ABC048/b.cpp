#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a, b, x;
    cin >> a >> b >> x;
    long long int ans;
    if (a > 0)
        ans = b / x - (a - 1) / x;
    else
        ans = b / x + 1;
    cout << ans << endl;
}