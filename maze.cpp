#include <iostream>
#include <stdio.h>
#include <cmath>
#include <ctime>
#include <vector>
using namespace std;
const int MAXN = 1e3;
int n, m, x, y;
int maze[MAXN][MAXN];
bool used[MAXN][MAXN];
bool res = false;
int res1 = 1e9;
int cnt;
bool dfs_maze(int x, int y){
    used[x][y] = 1;
    if(((x == 0) || (y == 0) || (x == n - 1) || (y == m - 1)) && (maze[x][y] == 0)){
        if (cnt < res1)
            res1 = cnt;
        return true;
    }
    if(x > 0){
        if((maze[x - 1][y] == 0) && (used[x - 1][y] == 0)){
            cnt++;
            res |= dfs_maze(x - 1, y);
            cnt--;
        }
    }
    if(y > 0){
        if((maze[x][y - 1] == 0) && (used[x][y - 1] == 0)){
            cnt++;
            res |= dfs_maze(x, y - 1);
            cnt--;
        }
    }
    if(x < n - 1){
        if((maze[x + 1][y] == 0) && (used[x + 1][y] == 0)){
            cnt++;
            res |= dfs_maze(x + 1, y);
            cnt--;
        }
    }
    if(y < m - 1){
        if((maze[x][y + 1] == 0) && (used[x][y + 1] == 0)){
            cnt++;
            res |= dfs_maze(x, y + 1);
            cnt--;
        }
    }
    return false;
}
int main()
{
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    scanf("%d%d%d%d", &n, &m, &x, &y);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &maze[i][j]);
        }
    }
    for (int i = 0;i < n; i++)
    {
        for (int j = 0;j < m; j++)
        {
            printf("%d ", maze[i][j]);
        }
        
        printf("\n");
    }
    dfs_maze(x, y);
    if(res == true) printf("YES"); else printf("NO");
    printf("%d", res1);
    return 0;
}
