#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int num;
    int time[10]={};
    int card=0;
    cin>>num;
    while(num>0){
        time[num%10]++;
        num/=10;
    }
    time[6]+=time[9];
    if(time[6]%2==1)
        time[6]++;
    time[6]/=2;
    for (int i=0;i<=8;i++){
        if(card<time[i]){
            card=time[i];
        }
    }
    cout<<card<<'\n';
}
