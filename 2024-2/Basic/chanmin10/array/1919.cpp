#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str1, str2;
    int i, j, cnt = 0;
    cin >> str1 >> str2;
    int len1 = str1.length();
    int len2 = str2.length();
    int total_len = len1 + len2;
    for(i = 0; i < len1; i++){
        for(j = 0; j < len2; j++){
            if(str1[i] == str2[j]){
                cnt++;
                str2.erase(j,1);
                len2--;
                break;
            }
        }
    }
    cout << total_len - cnt * 2;
    return 0;
}
