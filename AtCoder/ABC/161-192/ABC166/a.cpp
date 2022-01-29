#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int a[105] = {0};
    for (int i = 0; i < k; i++) {
        int d;
        cin >> d;
        for (int j = 0; j < d; j++) {
            int x;
            cin >> x;
            a[x - 1]++;
        }
    }
    int s = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) s++;
    }
    cout << s << endl;
}