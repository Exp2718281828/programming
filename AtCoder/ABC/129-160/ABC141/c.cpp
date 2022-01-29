#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, q, a[100005] = {};
    cin >> n >> k >> q;
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        a[x - 1]++;
    }
    for (int i = 0; i < n; i++) {
        if (q - a[i] < k)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}