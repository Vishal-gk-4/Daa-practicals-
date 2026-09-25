#include <iostream>
using namespace std;

int main() {
    int p[] = {10, 20, 30, 40};
    int n = 3;

    int dp[10][10];

    // One matrix needs 0 multiplication
    for (int i = 1; i <= n; i++) {
        dp[i][i] = 0;
    }

    // length = number of matrices in the chain
    for (int length = 2; length <= n; length++) {

        for (int i = 1; i <= n - length + 1; i++) {

            int j = i + length - 1;

            dp[i][j] = 999999;

            // Try every possible split
            for (int k = i; k < j; k++) {

                int cost = dp[i][k]
                         + dp[k + 1][j]
                         + p[i - 1] * p[k] * p[j];

                if (cost < dp[i][j]) {
                    dp[i][j] = cost;
                }
            }
        }
    }

    cout << "Minimum multiplication cost = " << dp[1][n];

    return 0;
}
conclusion : the above code says that matrix multiplication which means multipling the matrix it belongs to dynamic programming 

time complexity : O(n^3) - number of states O(n^2) * work per state O(n) 
space complexity : O(n^2)
