#include <math.h>

#include <iostream>
using namespace std;

int topdigit(long long int n) {
    while (1) {
        n /= 10;
        if (n < 10) return n;
    }
}

int numdigit(long long int n) {
    int ans = 0;
    while (1) {
        n /= 10;
        ans++;
        if (n == 0) return ans;
    }
}

long long intpow(long long int n, int r) {
    long long int ans = 1;
    for (int i = 0; i < r; i++) {
        ans *= n;
    }
    return ans;
}

long long bfs(long long int n) {
    long long int ans = 0;
    if (n <= 9) {
        if (n < 4)
            return 0;
        else if (n < 9)
            return 1;
        else
            return 2;
    }
    for (int i = 0; i < topdigit(n); i++) {
        if (i == 4 || i == 9) {
            ans += (intpow(10, numdigit(n) - 1));
        } else {
            long long int k = 0;
            for (int j = 0; j <= numdigit(n) - 1 - 1; j++) {
                k += intpow(10, numdigit(n) - 1 - 1 - j) * intpow(8, j);
            }
            k *= 2;
            ans += k;
        }
    }
    if (topdigit(n) == 4 || topdigit(n) == 9) {
        long long int x;
        x = (n - topdigit(n) * intpow(10, numdigit(n) - 1) + 1);
        //cout << x << endl;
        ans += x;
    } else {
        ans += bfs(n - topdigit(n) * intpow(10, numdigit(n) - 1));
    }
    return ans;
}

int main() {
    long long int a, b;
    cin >> a >> b;
    cout << bfs(b) - bfs(a - 1) << endl;
}