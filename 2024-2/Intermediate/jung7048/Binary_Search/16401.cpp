#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int m,n;
int a[1000002];
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>m>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int st=0,en=a[n-1];
    while(st<en){
        int mid=(st+en+1)/2;
        ll tmp=0;
        for(int i=0;i<n;i++){
            tmp+=a[i]/mid;
        }
        if(tmp>=m||mid==0){
            st=mid;
        }
        else{
            en=mid-1;
        }
    }
    cout<<st;
    return 0;
}