#include <algorithm>
#include <iostream>
using namespace std;

const int INF = 2100000000;

int main() {
    int n, r[200005];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> r[i];
    int minv = r[0];
    int maxprofit = -INF;
    for (int i = 1; i < n; i++) {
        maxprofit = max(maxprofit, r[i] - minv);
        minv = min(minv, r[i]);
    }
    cout << maxprofit << endl;
}