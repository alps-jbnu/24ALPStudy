
#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    int N;
    string str;
    int num;
    int result = 0;

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> str;

        //1. push
        if(str == "push"){
            cin >> num;
            q.push(num);
        }

        //2.pop
        else if(str == "pop"){
            if(q.size() == 0){
                result = -1;
                cout << result << endl;
            }
            else{
                result = q.front();
                cout << result << endl;
                q.pop();
            }
        }

        //3. size
        else if(str == "size"){
               cout << q.size() << endl;
        }

        //4. empty
        else if (str == "empty")
        {
            if(q.size() == 0){
                result = 1;
                   cout << result << endl;
            }
            else{
                result = 0;
                cout << result << endl;
            }
        }
        
        //5. front
        else if (str == "front")
        {
            if(q.size() == 0){
                result = -1;
                cout << result << endl;
            }
            else{
                result = q.front();
                cout << result << endl;
            }  
        }
         else if (str == "back")
        {
            if(q.size() == 0){
                result = -1;
                cout << result << endl;
            }
            else{
                result = q.back();
                cout << result << endl;
            }  
        }
     }
        return 0;
    }
