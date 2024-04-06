#include <iostream>
#include <string>
#define MAX_QUEUE_SIZE 2000000
using namespace std;

int main()
{
    int arr[MAX_QUEUE_SIZE];
    int first = -1;
    int rear = -1;
    
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string command;
    int input;
    int n;
    cin >> n;
    
    for(int i  = 0; i < n; i++)
    {
        cin >> command;
        if(command == "push")
        {
            cin >> input;
            rear++;
            arr[rear] = input;
        }
        else if(command == "pop") 
        {
            if(first != rear)
            {
                first++;
                cout << arr[first] << '\n';
            }
            else cout << -1 << '\n';
        }
        else if(command == "size") 
        {
            cout << rear - first << '\n';
        }
        else if(command == "empty")
        {
            if(first == rear) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if(command == "front")
        {
            if(first != rear) cout << arr[first + 1] << '\n';
            else cout << -1 << '\n';
        }
        else if(command == "back")
        {
            if(first != rear) cout << arr[rear] << '\n';
            else cout << -1 << '\n';
        }
    }
}
