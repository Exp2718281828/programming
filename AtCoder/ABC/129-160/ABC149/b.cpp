#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a, b, k;
    cin >> a >> b >> k;
    cout << max((long long)0, a - k) << ' ' << max((long long)0, min(a + b - k, b)) << endl;
}