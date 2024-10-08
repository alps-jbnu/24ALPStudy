#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B,C;
    cin>>A>>B>>C;
    int sum=A*B*C;
    int num[10]={};
    
    while(sum>0){
        num[sum%10]++;
        sum/=10;
    }
    for (int i=0;i<10;i++)
        cout<<num[i]<<'\n';
}
