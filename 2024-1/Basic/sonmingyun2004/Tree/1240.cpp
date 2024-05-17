#include <iostream>
#include <algorithm>
#include <list>
#include <queue>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    list< pair<int, int> > graph[n];
    for(int i = 0; i < n - 1; i++){
        int point1, point2, distance;
        cin >> point1 >> point2 >> distance;
        graph[point1 - 1].push_back(pair<int, int> (point2 - 1, distance));
        graph[point2 - 1].push_back(pair<int, int> (point1 - 1, distance));
    }

    int visit[n];
    fill(visit, visit + n, -1);

    queue<int> que;

    for(int i = 0; i < m; i++){
        int start_point, end_point;
        cin >> start_point >> end_point;

        visit[start_point - 1] = 0;
        que.push(start_point - 1);
        while (!que.empty()){
            int current_point = que.front();
            que.pop();

            for(pair<int, int>  next_point : graph[current_point]){
                if(visit[next_point.first] != -1) continue;
                visit[next_point.first] = visit[current_point] + next_point.second;
                que.push(next_point.first);
            }
        }

        cout << visit[end_point - 1] << endl;
        fill(visit, visit + n, -1);
    }
}
