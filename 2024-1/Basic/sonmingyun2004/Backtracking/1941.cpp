#include <iostream>
#include <vector>
#include <queue>

using namespace std;

char classroom[5][5];
int visit[5][5];

int number_of_Y = 0;
int total_solution = 0;
int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};
vector< pair<int, int> > point_array;

int bfs(int start_index){
    int size = 0;
    pair<int, int> start_point(point_array[start_index].first, point_array[start_index].second);
    queue< pair<int, int> > q;
    visit[start_point.first][start_point.second] = 1;
    q.push(start_point);
    size++;
    while (!q.empty()){
        pair<int, int> current_point = q.front();
        q.pop();

        for(int i = 0; i < 4; i++){
            pair<int, int> next_point(current_point.first + dx[i], current_point.second + dy[i]);
            if(next_point.first < 0 || next_point.first > 4 || next_point.second < 0 || next_point.second > 4 || visit[next_point.first][next_point.second]) continue;
            q.push(next_point);
            visit[next_point.first][next_point.second] = 1;
            size++;
        }
    }

    visit[start_point.first][start_point.second] = 0;
    q.push(start_point);
    while (!q.empty()){
        pair<int, int> current_point = q.front();
        q.pop();

        for(int i = 0; i < 4; i++){
            pair<int, int> next_point(current_point.first + dx[i], current_point.second + dy[i]);
            if(next_point.first < 0 || next_point.first > 4 || next_point.second < 0 || next_point.second > 4 || visit[next_point.first][next_point.second] < 1) continue;
            q.push(next_point);
            visit[next_point.first][next_point.second] = 0;
        }
    }

    return size;
}

void bruteforce(int last_index = -1, int current_depth = 0){
    if(current_depth == 7){
        if(bfs(last_index) == 7) total_solution++;
        return;
    }
    for(int i = last_index + 1; i < 19 + current_depth; i++){
        if(classroom[point_array[i].first][point_array[i].second] == 'Y') number_of_Y++;
        if(number_of_Y > 3){
            number_of_Y--;
            continue;
        }
        visit[point_array[i].first][point_array[i].second] = 0;
        bruteforce(i, current_depth + 1);
        visit[point_array[i].first][point_array[i].second] = -1;
        if(classroom[point_array[i].first][point_array[i].second] == 'Y') number_of_Y--;
    }
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for(int i = 0; i < 5; i++) for(int j = 0; j < 5; j++) cin >> classroom[i][j];
    for(int i = 0; i < 5; i++) for(int j = 0; j < 5; j++) visit[i][j] = -1;
    for(int i = 0; i < 5; i++) for(int j = 0; j < 5; j++) point_array.push_back(pair<int, int>(i, j));

    bruteforce();
    cout << total_solution;
}
