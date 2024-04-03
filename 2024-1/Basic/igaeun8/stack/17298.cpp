#include <iostream>
#include <stack>
using namespace std;

int a[1000001];
int nge[1000001];
stack<int> s;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=0; i<n; i++){
        while(!s.empty() && a[s.top()] < a[i]){ 
            nge[s.top()] = a[i]; //인덱스 0번이라고 0을 넣을게 아니라 3을 넣어야지..
            s.pop();
        }
        s.push(i);
    }

    while(!s.empty()){ //스택에 남아 있는 값은 오큰수가 없는 값
        nge[s.top()] = -1;
        s.pop();
    }

    for(int i=0; i<n; i++) cout<<nge[i]<<" ";

    return 0;
}
