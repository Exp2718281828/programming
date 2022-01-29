#include <bits/stdc++.h>
using namespace std;

bool bracketcheck(int n, int digits) {
    int c = 0;
    for (int i = 0; i < digits; i++) {
        if (n & (1 << (digits - 1 - i))) {
            c--;
            if (c < 0) return false;
        } else {
            c++;
        }
    }
    if (c == 0)
        return true;
    else
        return false;
}

int main() {
    int n;
    cin >> n;
    for (int bit = 0; bit < (1 << n); bit++) {
        if (bracketcheck(bit, n)) {
            for (int i = 0; i < n; i++) {
                if (bit & (1 << (n - 1 - i)))
                    cout << ')';
                else
                    cout << '(';
            }
            cout << endl;
        }
    }
}