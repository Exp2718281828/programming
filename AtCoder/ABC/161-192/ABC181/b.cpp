#include<iostream>
using namespace std;
int main(){
    long long int n, a, b;
    long long int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        ans += (long long)b * (b + 1) / 2 - (a-1) * a / 2;
    }
    cout << ans << endl;
}