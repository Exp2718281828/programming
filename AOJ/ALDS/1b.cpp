#include <iostream>
using namespace std;

long long int gcd(long long int x, long long int y) {
    if (x % y == 0) {
        return y;
    } else {
        return gcd(y, x % y);
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
}