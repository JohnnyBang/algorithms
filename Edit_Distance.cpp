#include <iostream>
#include <stdio.h>
#include <cmath>
#include <ctime>
#include <vector>
using namespace std;
const int MAXN = 1e3;
int main()
{
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    string word1, word2;
    cin >> word1 >> word2;
    int dp[MAXN][MAXN];
    dp[0][0] = 0;
    for(int i = 1; i <= word1.length(); i++){
        dp[i][0] = dp[i - 1][0] + 1;
    }
    for(int i = 1; i <= word2.length(); i++){
        dp[0][i] = dp[0][i - 1] + 1;
    }
    for(int i = 1; i <= word1.length(); i++){
        for(int j = 1; j <= word2.length(); j++){
            if(word1[i] == word2[j]){
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = min(min(dp[i - 1][j] + a, dp[i][j - 1] + b), dp[i - 1][j - 1] + c);
            }
        }
    }
    printf("%d", dp[word1.length()][word2.length()]);
    return 0;
}
