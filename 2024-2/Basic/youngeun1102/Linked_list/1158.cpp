#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    
    queue <int> q;
	int n, k;
	cin>>n>>k;
    
    for (int i=0;i<n;i++)
        q.push(i+1);
    
    cout<<"<";
    while (q.size()!=0){
        for(int i=0;i<k-1;i++){
            q.push(q.front());
            q.pop();
        }
        if (q.size()==1){
            cout<<q.front()<<"> ";
            q.pop();
        }
        else{
            cout<<q.front()<<", ";
            q.pop();
        }
    }
}
