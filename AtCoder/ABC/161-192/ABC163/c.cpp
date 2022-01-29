#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int a[200005] = {0};
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int k;
        cin >> k;
        a[k]++;
    }
    for (int i = 1; i <= n; i++) cout << a[i] << endl;
}