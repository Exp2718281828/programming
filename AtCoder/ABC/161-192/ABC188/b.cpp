#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[100005], b[100005];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    long long int s = 0;
    for (int i = 0; i < n; i++) s += (long long)a[i] * b[i];
    if (s == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}