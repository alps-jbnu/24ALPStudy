#include <bits/stdc++.h>
using namespace std;
int n,m;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int tmp=0x5f5f5f5f;
    for(int i=0;i<n;i++){
        auto it =lower_bound(a.begin(),a.end(),a[i]+m);
        if(it!=a.end()){
            tmp=min(tmp,*it-a[i]);
        }
    }
    cout<<tmp;
    return 0;
}