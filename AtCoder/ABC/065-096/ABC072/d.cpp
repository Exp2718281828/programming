#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    bool check[100005];
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        check[i] = a == i + 1 ? true : false;
    }
    check[n] = false;
    for (int i = 0; i < n; i++) {
        if (check[i]) {
            check[i] = false;
            check[i + 1] = false;
            ans++;
        }
    }
    cout << ans << endl;
}