#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    int students[6][2] = {0};
    
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int gender,grade;
        cin>>gender>>grade;
        students[grade-1][gender]++;
    }
    int rooms=0;
    for(int grade=0;grade<6;grade++){
        for(int gender=0;gender<2;gender++){
            if(students[grade][gender]>0)
                rooms+=(students[grade][gender]+k-1)/k;
        }
    }
    cout<<rooms<<'\n';
}
