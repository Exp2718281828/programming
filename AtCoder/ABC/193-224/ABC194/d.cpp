#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    double ans = 0;
    for (int i = 1; i < n; i++) ans += 1.0 / i;
    ans *= n;
    printf("%.16f\n", ans);
}