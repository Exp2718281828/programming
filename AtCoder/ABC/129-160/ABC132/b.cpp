#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, p[25];
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n - 2; i++){
        if (max({p[i], p[i + 1], p[i + 2]}) != p[i + 1] && min({p[i], p[i + 1], p[i + 2]}) != p[i + 1]) ans++;
    }
    cout << ans << endl;
}