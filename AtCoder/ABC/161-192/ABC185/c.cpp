#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

__int128 mem[205][205];

__int128 comb(int n, int r) {
    if (mem[n][r] >= 0) return mem[n][r];
    if (r == 1) {
        mem[n][r] = n;
        return n;
    }
    if (n == r) {
        mem[n][r] = 1;
        return 1;
    }
    __int128 ans;
    ans = comb(n - 1, r - 1) + comb(n - 1, r);
    mem[n][r] = ans;
    return ans;
}

int main() {
    memset(mem, -1, sizeof(mem));
    int r;
    cin >> r;
    if (r >= 13)
        cout << (long long)comb(r - 1, r - 12) << endl;
    else
        cout << 1 << endl;
}