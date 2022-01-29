#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

int main() {
    long long int n, a[200005], b[200005];
    long long int asum = 0;
    pair<long long int, long long int> c[200005];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
    for (int i = 0; i < n; i++) {
        c[i].first = 2 * a[i] + b[i];
        c[i].second = i;
    }
    sort(c, c + n);
    for (int i = 0; i < n; i++) asum += a[i];
    for (int i = 1; i <= n; i++) {
        asum -= 2 * a[c[n - i].second] + b[c[n - i].second];
        if (asum < 0) {
            cout << i << endl;
            break;
        }
    }
}