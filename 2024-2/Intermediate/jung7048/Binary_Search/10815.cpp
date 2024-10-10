#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500001];
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>m;
    int tmp;
    for(int i=0;i<m;i++){
        cin>>tmp;
        if(binary_search(a,a+n,tmp)){
            cout<<"1 ";
        }
        else{
            cout<<"0 ";
        }
    }

    return 0;
}