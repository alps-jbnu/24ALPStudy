#include <bits/stdc++.h>
using namespace std;
 
int dat[2000001];
int s, e;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string str;
    cin >> n;
    while(n--){
        cin >> str;
        if(str == "push"){
            cin >> dat[e++];   
        }
        else if(str == "pop"){
            cout << (s == e? -1 : dat[s++]) << '\n';
        }
        else if(str == "size"){
            cout << e - s << '\n';
        }
        else if(str == "empty"){
            cout << (s == e? 1 : 0) << '\n';
        }
        else if(str == "front"){
            cout << (s == e? -1 : dat[s]) << '\n';
        }
        else{
            cout << (s == e? -1 : dat[e-1]) << '\n';
        }
    }
    return 0;
}
