#include <bits/stdc++.h>
using namespace std;

int main() {
    int w, h, n;
    cin >> w >> h >> n;
    int a[105][105] = {0};
    for (int i = 0; i < n; i++) {
        int x, y, k;
        cin >> x >> y >> k;
        for (int j = 0; j < w; j++) {
            for (int l = 0; l < h; l++) {
                switch (k) {
                    case 1:
                        if (j < x) a[j][l] = 1;
                        break;
                    case 2:
                        if (j >= x) a[j][l] = 1;
                        break;
                    case 3:
                        if (l < y) a[j][l] = 1;
                        break;
                    case 4:
                        if (l >= y) a[j][l] = 1;
                        break;
                }
            }
        }
    }
    int s = 0;
    for (int i = 0; i < w; i++)
        for (int j = 0; j < h; j++)
            if (a[i][j] == 0) s++;
    cout << s << endl;
}