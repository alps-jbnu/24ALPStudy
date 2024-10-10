#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main(){
    int n, x, i = 1;
    bool able = 1;
    stack<int> stc;
    vector<char> ans;
    cin >> n;
    while(n--){
        cin >> x;
        if(!stc.empty() && x == stc.top()){
            ans.push_back('-');
            stc.pop();
        }
        else if(i <= x){
            do{
                stc.push(i++);
                ans.push_back('+');
            }while(i <= x);
            stc.pop();
            ans.push_back('-');
        }
        else able = 0;
    }
    if(able == 0) cout << "NO";
    else for(auto e:ans) cout << e << '\n';
    return 0;
}
