#include <bits/stdc++.h>
using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    list<char> L;
    string str;
    int len, i, x;
    cin >> x;
    while(x--){
        cin >> str;
        len = str.size();
        list<char>::iterator t = L.begin();
        for(i = 0; i < len; i++) {
            if (str[i] == '<'){
                if (t != L.begin()) t--;
            }
            else if (str[i] == '>'){
                if(t != L.end()) t++;
            }
            else if (str[i] == '-'){
                if(t != L.begin()) t = L.erase(--t);
            }
            else L.insert(t, str[i]);
        }
        for(auto e : L) cout << e;
        cout << "\n";
        L.clear();
    }
    return 0;
}
