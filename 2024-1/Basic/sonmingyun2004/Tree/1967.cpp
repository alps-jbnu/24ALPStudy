#include <iostream>
#include <list>

using namespace std;

pair<int, int> max_line(list< pair<int, int> > tree[], int node = 0)
{
    //first는 max_subtree
    //second는 max_line
    int max_subtree = 0;
    int first_max_line = 0;
    int second_max_line = 0;
    for(pair <int, int> child : tree[node]){
        pair<int, int> sub_max_line = max_line(tree, child.first);
        if(sub_max_line.first > max_subtree) max_subtree = sub_max_line.first;
        if(sub_max_line.second + child.second > first_max_line){
            second_max_line = first_max_line;
            first_max_line = sub_max_line.second + child.second;
        }
        else if(sub_max_line.second + child.second > second_max_line){
            second_max_line = sub_max_line.second + child.second;
        }
    }

    if(first_max_line + second_max_line > max_subtree) max_subtree = first_max_line + second_max_line;

    return pair<int, int> (max_subtree, first_max_line);
}

int main(){
    int n;
    cin >> n;

    list< pair<int, int> > tree[n];
    for(int i = 0; i < n - 1; i++) {
        int parent, child, distance;
        cin >> parent >> child >> distance;

        tree[parent - 1].push_back(pair<int, int>(child - 1, distance));
    }

    cout << max_line(tree).first << endl;
}
