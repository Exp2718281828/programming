#include <iostream>
#include <string>
using namespace std;
const int INF = 100000000;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int e = 0, w = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'E')
            e++;
        else
            w++;
    }
    int ans;
    int l, r;
    if (s[0] == 'E')
        ans = e - 1;
    else
        ans = e;
    l = 0;
    r = ans;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'W') l++;
        if (s[i + 1] == 'E') r--;
        int x;
        x = l + r;
        if (ans > x) ans = x;
    }
    cout << ans << endl;
}