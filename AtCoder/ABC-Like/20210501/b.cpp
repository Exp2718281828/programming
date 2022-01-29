#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, D, H;
    int d[105], h[105];
    cin >> n >> D >> H;
    for (int i = 0; i < n; i++) cin >> d[i] >> h[i];
    double tanthetamax = 0.0;
    for (int i = 0; i < n; i++) {
        double tantheta = (double)(D - d[i]) / (double)(H - h[i]);
        tanthetamax = max(tanthetamax, tantheta);
    }
    double ans = 0.0;
    ans = max(ans, H - D / tanthetamax);
    printf("%.16f\n", ans);
}