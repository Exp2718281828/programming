#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    pair<int, int> a[100005];
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[i].first = x;
        a[i].second = i + 1;
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        cout << a[i].second;
        if (i != n - 1) cout << ' ';
    }
    cout << endl;
}