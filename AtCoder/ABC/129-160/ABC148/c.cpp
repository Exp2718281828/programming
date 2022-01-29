#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int x, long long int y) {
    if (x % y == 0) {
        return y;
    } else {
        return gcd(y, x % y);
    }
}

long long int lcm(long long int x, long long int y) {
    return x / gcd(x, y) * y;
}

int main() {
    long long int a, b;
    cin >> a >> b;
    cout << lcm(a, b) << endl;
}