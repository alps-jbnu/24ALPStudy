#include <bits/stdc++.h>  
using namespace std;
typedef long long ll;
int n;
ll a[5001];
ll ans[3]={0x7fffffff,0x7fffffff,0x7fffffff};
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int index=lower_bound(a,a+n,-a[i]-a[j])-a;
            
            for(int k=-2;k<=2;k++){
                if((index+k)==i||(index+k)==j)continue;
                if(index+k<0||index+k>=n) continue;
                if(abs(a[i]+a[j]+a[index+k])<abs(ans[0]+ans[1]+ans[2])){
                    ans[0]=a[i]; ans[1]=a[j]; ans[2]=a[index+k];
                }
            }
        }
    }
    sort(ans,ans+3);
    for(int i=0;i<3;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}