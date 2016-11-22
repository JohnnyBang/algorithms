#include <iostream>
#include <stdio.h>
#include <cmath>
#include <ctime>
#include <vector>
#include <set>
#include <map>
#include <queue>
using namespace std;
int n, m, a[100][100];
//const int MAXN = 54;
//long long dp[MAXN][MAXN];
//vector <vector <vector <pair <int, int>>>> adj;
//bool used[MAXN][MAXN];
//queue <pair <int, int>> q;
//void bfs(int x, int y) {
//    if (used[x][y]) {
//        return;
//    }
//    q.push(make_pair(x, y));
//    used[x][y] = true;
//    while (!q.empty()) {
//        pair <int,int> p = q.front();
//        int x1 = x;
//        int y1 = y;
//        x = p.first;
//        y = p.second;
//        dp[x][y] += dp[x1][y1];
//        q.pop();
//        for (int i = 0; i < adj[x][y].size(); ++i) {
//            int w = adj[x][y];
//            if (used[w]) {
//                continue;
//            }
//            q.push(make_pair(x, y));
//            used[w] = true;
//        }
//    }
//}

int main()
{
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
//    int n, m;
//    scanf("%d%d", &n, &m);
//    dp[0][0] = 1;
////    for(int i = 0; i < n; i++){
////        for(int j = 0; j < m; j++){
////            if((j - 2 >= 0) && (i - 1 >= 0)) dp[i][j] += dp[i - 1][j - 2];
////            if((j - 1 >= 0) && (i - 2 >= 0)) dp[i][j] += dp[i - 2][j - 1];
////            if((j - 2 >= 0) && (i + 1 >= 0)) dp[i][j] += dp[i + 1][j - 2];
////            if((j + 1 >= 0) && (i - 2 >= 0)) dp[i][j] += dp[i - 2][j + 1];
////        }
////    }
//    
//    printf("%llu", dp[n - 1][m - 1]);

    scanf("%d%d", &n, &m);
//    n--;
//    m--;
//    a[0][0] = 1;
//    for(int i = 1; i <= n; i++){
//        a[i][0] = a[i - 1][0] + i;
//    }
//    int mn = min(m, n);
//    for(int i = 0; i <= n; i++){
//        int cnt = 2;
//        for(int j = 1; j <= m; j++){
//            a[i][j] = a[
//        }
//    }
    int k = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            a[i - j][j] = k++;
        }
    }
    
    for(int i = 1; i < m; i++){
        for(int j = n - 1; j >= 0; j--){
            
            int x = n - j, y = j + i - 1;
            a[x][y] = k++;
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
