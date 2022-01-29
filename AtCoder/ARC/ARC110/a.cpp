#include <iostream>
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
    int n;
    cin >> n;
    long long int g = 1;
    for (int i = 2; i <= n; i++) {
        g = lcm(g, i);
    }
    cout << g + 1 << endl;
}