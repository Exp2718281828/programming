#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[105];
    bool ans = true;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a % 2 == 0 && (a % 3 != 0 && a % 5 != 0)) ans = false;
    }
    if (ans)
        cout << "APPROVED" << endl;
    else
        cout << "DENIED" << endl;
}