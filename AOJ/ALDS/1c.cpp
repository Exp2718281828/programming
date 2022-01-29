#include <math.h>

#include <iostream>
using namespace std;

bool Isprime(int num) {
    if (num < 2)
        return false;
    else if (num == 2)
        return true;
    else if (num % 2 == 0)
        return false;
    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (Isprime(x)) ans++;
    }
    cout << ans << endl;
}