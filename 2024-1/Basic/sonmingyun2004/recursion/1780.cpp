#include <iostream>
#include <vector>

using namespace std;

int paperMinus1 = 0;
int paperZero = 0;
int paper1 = 0;

void count(vector< vector<int> > & paper, int start_x, int start_y, int scale){
    int base = paper[start_x][start_y];
    for(int i = start_x; i < start_x + scale; i++) {
        for (int j = start_y; j < start_y + scale; ++j) {
            if(paper[i][j] != base){
                count(paper, start_x, start_y, scale / 3);
                count(paper, start_x, start_y + scale / 3, scale / 3);
                count(paper, start_x, start_y + scale / 3 * 2, scale / 3);
                count(paper, start_x + scale / 3, start_y, scale / 3);
                count(paper, start_x + scale / 3, start_y + scale / 3, scale / 3);
                count(paper, start_x + scale / 3, start_y + scale / 3 * 2, scale / 3);
                count(paper, start_x + scale / 3 * 2, start_y, scale / 3);
                count(paper, start_x + scale / 3 * 2, start_y + scale / 3, scale / 3);
                count(paper, start_x + scale / 3 * 2, start_y + scale / 3 * 2, scale / 3);
                return;
            }
        }
    }

    if(base == -1) paperMinus1++;
    if(base == 0) paperZero++;
    if(base == 1) paper1++;
}

int main(){
    int n;
    cin >> n;
    vector< vector<int> > paper(n, vector<int> (n));

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> paper[i][j];

    count(paper, 0, 0, n);

    cout << paperMinus1 << '\n' << paperZero << '\n' << paper1 << endl;
}
