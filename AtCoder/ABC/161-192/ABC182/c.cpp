#include <bits/stdc++.h>
using namespace std;

int digitnum(long long int n) {
    int ans = 0;
    while (1) {
        n /= 10;
        ans++;
        if (n == 0) return ans;
    }
}

int main() {
    long long int n;
    long long int a = 0, b = 0, c = 0, ans=0;
    cin >> n;
    long long int m = n;
    while (m > 0) {
        if ((m % 10) % 3 == 0)
            a++;
        else if ((m % 10) % 3 == 1)
            b++;
        else
            c++;
        m /= 10;
    }
    if (n % 3 == 0)
        ans = 0;
    else if (n % 3 == 1) {
        if (b > 0) {
            if (digitnum(n) == 1)
                ans = -1;
            else
                ans = 1;
        } else {
            if (digitnum(n) <= 2)
                ans = -1;
            else
                ans = 2;
        }
    } else {
        if (c > 0) {
            if (digitnum(n) == 1)
                ans = -1;
            else
                ans = 1;
        } else {
            if (digitnum(n) <= 2)
                ans = -1;
            else
                ans = 2;
        }
    }
    cout << ans << endl;
}