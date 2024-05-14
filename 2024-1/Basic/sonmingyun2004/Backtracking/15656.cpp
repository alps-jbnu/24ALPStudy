#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int comp(const void * a, const void * b){
    return *((int *) a) > *((int *) b);
}

vector<int> output;
void permutation(const vector<int> & array, const int & m, int depth = 0){
    if(depth == m){
        for(int i : output) cout << i << ' ';
        cout << '\n';
        return;
    }
    for(int i = 0; i < array.size(); i++){
        output.push_back(array[i]);
        permutation(array, m, depth + 1);
        output.pop_back();
    }
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    int array[n];
    for(int i = 0; i < n; i++)
        cin >> array[i];
    qsort(array, n, sizeof(int), comp);

    vector<int> extractArray(1, array[0]);
    for(int i = 1; i < n; i++) if(extractArray.back() != array[i]) extractArray.push_back(array[i]);
    permutation(extractArray, m);
}
