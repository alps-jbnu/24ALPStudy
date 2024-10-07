#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,v,count=0;
    cin>>N;
    int num[N];
    
    for (int i=0;i<N;i++)
        cin>>num[i];
    cin>>v;
    for (int i=0;i<N;i++){
        if (num[i]==v)
            count++;
    }
    cout<<count<<'\n';
}
