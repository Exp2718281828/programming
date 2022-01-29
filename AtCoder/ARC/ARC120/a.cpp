#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int a[200005];
    cin >> n;
    int mp = 0;
    int m = -1;
    long long int s = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
        if (a[i] > m) {
            m = a[i];
            mp = i;
        }
    }
    for (int i = 0; i < n; i++) {
        s += m;
        a[i] += m;
        if (a[i] > m) {
            m = a[i];
            mp = i;
        }
    }
    cout << s << endl;
}