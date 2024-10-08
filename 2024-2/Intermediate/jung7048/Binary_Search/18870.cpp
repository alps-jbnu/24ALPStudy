#include <bits/stdc++.h>
using namespace std;
int n;
int a[1000001];
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    vector<int> tmp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        tmp.push_back(a[i]);
    }
    sort(tmp.begin(),tmp.end());
    vector<int> sorted;
    for(int i=0;i<n;i++){
        if(i==0||tmp[i]!=tmp[i-1]){
            sorted.push_back(tmp[i]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<lower_bound(sorted.begin(),sorted.end(),a[i])-sorted.begin()<<" ";
    }
    return 0;
}