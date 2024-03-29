#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
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
            s.push(num);
        }

        //2.pop
        else if(str == "pop"){
            if(s.size() == 0){
                result = -1;
                cout << result << endl;
            }
            else{
                result = s.top();
                cout << result << endl;
                s.pop();
            }
        }

        //3. size
        else if(str == "size"){
               cout << s.size() << endl;
        }

        //4. empty
        else if (str == "empty")
        {
            if(s.size() == 0){
                result = 1;
                   cout << result << endl;
            }
            else{
                result = 0;
                cout << result << endl;
            }
        }
        
        //5. top
        else if (str == "top")
        {
            if(s.size() == 0){
                result = -1;
                cout << result << endl;
            }
            else{
                result = s.top();
                cout << result << endl;
            }  
        }
     }
        return 0;
    }

