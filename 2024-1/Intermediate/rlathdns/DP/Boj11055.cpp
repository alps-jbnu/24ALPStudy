#include <iostream>
#include <algorithm>
using namespace std;

int n;
int a[1010],d[1010];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        d[i] = a[i];
    }
    for(int i = 0; i<n; i++)
        for(int j = 0; j<i; j++)
            if(a[j]<a[i]) d[i] = max(d[i],d[j]+a[i]);//현재 위치 i에서 이전 위치 j보다 큰 경우 
    cout << *max_element(d, d+n);
}
