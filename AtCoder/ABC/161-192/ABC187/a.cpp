#include <iostream>
using namespace std;

int digitsum(long long int n) {
    int ans = 0;
    while (n > 0) {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

int main() {
    int a, b;
    cin >> a >> b;
    int x, y;
    x = digitsum(a);
    y = digitsum(b);
    if (x > y)
        cout << x << endl;
    else
        cout << y << endl;
}