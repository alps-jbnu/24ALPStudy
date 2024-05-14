#include <iostream>
#include <string>
#include <queue>

using namespace std;

int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};

struct position
{
    bool is_first_map;
    int x;
    int y;
};

int main()
{
    int n, m;
    cin >> n >> m;
    int first_floor_map[n][m];
    int second_floor_map[n][m];
    for(int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        for(int j = 0; j < m; j++)
        {
            if(str[j] == '1')
            {
                first_floor_map[i][j] = -1;
                second_floor_map[i][j] = -1;
            }
            if(str[j] == '0')
            {
                first_floor_map[i][j] = 0;
                second_floor_map[i][j] = 0;
            }
        }
    }

    queue<position> q;
    position start_point = {true, 0, 0};
    first_floor_map[0][0] = 1;
    second_floor_map[0][0] = 1;
    q.push(start_point);

    while(!q.empty())
    {
        position current_point = q.front();
        q.pop();

        for(int i = 0; i < 4; i++)
        {
            position next_point = {current_point.is_first_map, current_point.x + dx[i], current_point.y + dy[i]};
            if(next_point.x < 0 || next_point.x >= n || next_point.y < 0 || next_point.y >= m) continue;
            if(!next_point.is_first_map && second_floor_map[next_point.x][next_point.y] == -1) continue;
            if(next_point.is_first_map && first_floor_map[next_point.x][next_point.y] == -1) next_point.is_first_map = false;

            if(next_point.is_first_map)
            {
                if(first_floor_map[next_point.x][next_point.y] > 0) continue;
                first_floor_map[next_point.x][next_point.y] = first_floor_map[current_point.x][current_point.y] + 1;
                if(!second_floor_map[next_point.x][next_point.y]) second_floor_map[next_point.x][next_point.y] = first_floor_map[current_point.x][current_point.y] + 1;
            }
            else if(current_point.is_first_map)
            {
                if(second_floor_map[next_point.x][next_point.y] > 0) continue;
                second_floor_map[next_point.x][next_point.y] = first_floor_map[current_point.x][current_point.y] + 1;
            }
            else
            {
                if(second_floor_map[next_point.x][next_point.y] > 0) continue;
                second_floor_map[next_point.x][next_point.y] = second_floor_map[current_point.x][current_point.y] + 1;
            }

            q.push(next_point);
        }
    }

    if(second_floor_map[n - 1][m - 1] == 0) cout << -1;
    else cout << second_floor_map[n - 1][m - 1];
}
