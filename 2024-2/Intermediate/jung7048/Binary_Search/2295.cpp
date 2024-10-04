#include <bits/stdc++.h>
using namespace std;
int a[1001];
int b[1000010];
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int size=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            b[size]=a[i]+a[j];
            size++;
        }
    }
    sort(b,b+n*n);
    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(binary_search(b,b+n*n,a[i]-a[j])){
                cout<<a[i];
                return 0;
            }
        }
    }
    return 0;
}   