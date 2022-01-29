#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    string s[105], t[105];
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++) cin >> s[i];
    cin >> m;
    for (int i = 0; i < m; i++) cin >> t[i];
	//お金をもらうためにはsの要素である必要がある
    for (int i = 0; i < n; i++) { //sの要素それぞれについてチェック
        int x = 0; //もらえるお金のカウンタ
        for (int j = 0; j < n; j++) { //もらえる数をチェック
            if (s[i] == s[j]) x++;
        }
        for (int j = 0; j < m; j++) { //引かれる数をチェック
            if (s[i] == t[j]) x--;
        }
        ans = max(ans, x); //ansの更新
		//常にans<0となってしまう場合でももともとans=0なので大丈夫
    }
    cout << ans << endl;
}