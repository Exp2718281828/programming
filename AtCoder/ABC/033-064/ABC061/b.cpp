#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int r[55]={};
	for (int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        r[a]++;
        r[b]++;
    }
    for (int i = 0; i < n; i++) cout << r[i + 1] << endl;
}
