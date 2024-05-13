#include <iostream>
#include <vector>

using namespace std;

void print(vector <vector<char> > & output, int start_x, int start_y, int scale){
    if(scale == 3) {
        output[start_x][start_y + 2] = '*';
        output[start_x + 1][start_y + 1] = '*';
        output[start_x + 1][start_y + 3] = '*';
        for(int i = 0; i < 5; i++) output[start_x + 2][start_y + i] = '*';
    }
    else{
        print(output, start_x, start_y + (scale >> 1), scale >> 1);
        print(output, start_x + (scale >> 1), start_y, scale >> 1);
        print(output, start_x + (scale >> 1), start_y + scale, scale >> 1);
    }
}

int main(){
    int n;
    cin >> n;
    vector< vector<char> > output(n, vector<char>(n * 2 - 1, ' '));
    print(output, 0, 0, n);
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n * 2 - 1; j++) {
            cout << output[i][j];
        }
        cout << endl;
    }
}
