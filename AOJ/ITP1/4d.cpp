#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    int n;
    long long a, m;
    cin >> n;
    long long max = -1000000, min = 1000000, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a > max) max = a;
        if (a < min) min = a;
        sum += a;
    }
    printf("%lld %lld %lld\n", min, max, sum);
    return 0;
}