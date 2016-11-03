#include <iostream>
#include <stdio.h>
#include <cmath>
#include <ctime>
#include <vector>
using namespace std;
const int MAXN = 1e1 * 5 + 1;
int n, dp[MAXN][MAXN];
char manegment[MAXN][MAXN];
int solve(){
    int result;
    //-----------------
    return result;
}
int main()
{
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    while (scanf("%d", &n) == 1){
        for (int i=  0;i < n;i++){
            scanf("%s\n", &manegment[i]);
        }
        int result = solve();
        printf("%d\n", result);
    }
    return 0;
}
