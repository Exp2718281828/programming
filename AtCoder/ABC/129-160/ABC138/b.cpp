#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
	double s=0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s += 1.0 / x;
    }
    printf("%.16f\n", 1/s);
}