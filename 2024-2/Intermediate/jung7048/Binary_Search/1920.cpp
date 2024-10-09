#include <bits/stdc++.h>
using namespace std;
int arr[100001];
int n;
void bin_srch(int i){
    int st=0,en=n-1;
    while(st<=en){
        int mid=(st+en)/2;
        if(arr[mid]==i){
            cout<<"1\n";
            return;
        }
        else if(arr[mid]<i){
            st=mid+1;
        }
        else{
            en=mid-1;
        }
    }
    cout<<"0\n";
    return;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int k;
    cin>>k;
    int tmp;
    for(int i=0;i<k;i++){
        cin>>tmp;
        bin_srch(tmp);
    }
    return 0;
}