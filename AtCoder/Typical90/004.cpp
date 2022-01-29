#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned short int h, w, a[2005][2005];
    cin >> h >> w;
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++) scanf("%hd", &a[i][j]);
    int sh[2005] = {}, sw[2005] = {};
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++) sh[i] += a[i][j];
    for (int i = 0; i < w; i++)
        for (int j = 0; j < h; j++) sw[i] += a[j][i];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            printf("%d", sh[i] + sw[j] - a[i][j]);
            j == w - 1 ? printf("\n") : printf(" ");
        }
    }
}