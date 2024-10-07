#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, gender, grade, room = 0;
    cin >> n >> k;
    int table[6][2] = {0};
    for(int i = 0; i < n; i++){
        cin >> gender >> grade;
        table[grade-1][gender]++;
    }
    for(int i = 0; ;i++){
        int pre = room;
        for(int j = 0; j < 6; j++){
            for(int r = 0; r < 2; r++){
                if(table[j][r] > i * k) room++;
            }
        }
        if(pre == room) break;
    }
    cout << room;
    return 0;
}
