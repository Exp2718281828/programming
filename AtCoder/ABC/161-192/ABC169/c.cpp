#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a;
    double b;
    cin >> a >> b;
    b *= 100;
    int c = round(b);
    __int128 ansb = (__int128)a * c;
    ansb /= 100;
    long long int ans = ansb;
    cout << ans << endl;
}