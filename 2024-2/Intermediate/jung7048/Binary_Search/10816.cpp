#include <bits/stdc++.h>
using namespace std;
int arr[500001];
int box[500001];
int n; 
int bin_srch(int x){
    int st=0,en=n,mid,stlen=0;
    while(st<en){
        mid=(st+en)/2;
        if(arr[mid]<x){
            st=mid+1;
        }
        else{
            en=mid;
        }
    }
    stlen=st;
    
    st=0,en=n;
    int enlen=0;
    while(st<en){
        mid=(st+en)/2;
        if(arr[mid]>x){
            en=mid;
        }
        else{
            st=mid+1;
        }
    }
    enlen=st;
    return enlen-stlen;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int m; cin>>m;
    int tmp;
    for(int i=0;i<m;i++){
        cin>>tmp;
        cout<<bin_srch(tmp)<<" ";
    }

    return 0;
}



