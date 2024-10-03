#include <bits/stdc++.h>
using namespace std;
int n;
int mx=4000001;
vector<bool> isPrime(mx,true);
vector<int> primes;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    for(int i=2;i*i<mx;i++){
        if(!isPrime[i]) continue;
        for(int j=i*i;j<mx;j+=i){
            isPrime[j]=false;
        }
    }
    for(int i=2;i<mx;i++){
        if(isPrime[i]){
            primes.push_back(i);
        }
    }
    cin>>n;
    int st=0,en=1,ans=0,sum=primes[0];
    while(1){
        if(sum==n) ans++;
        if(sum<=n) sum+=primes[en++];
        if(sum>n) sum-=primes[st++];
        if(en==primes.size()) break;
    }
    cout<<ans;
    return 0;
}