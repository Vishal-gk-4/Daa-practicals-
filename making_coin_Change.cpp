#include <iostream>
using namespace std;

int dp[100][100];

int coinChange(int n, int amount, int coins[])
{
    // Base case
    if(amount == 0)
        return 0;

    if(n == 0)
        return 9999;

    // Already calculated
    if(dp[n][amount] != -1)
        return dp[n][amount];

    // If coin is greater than amount
    if(coins[n-1] > amount)
    {
        dp[n][amount] = coinChange(n-1, amount, coins);
    }
    else
    {
        // Take the coin
        int take = 1 + coinChange(n, amount-coins[n-1], coins);

        // Don't take the coin
        int notTake = coinChange(n-1, amount, coins);

        dp[n][amount] = min(take, notTake);
    }

    return dp[n][amount];
}

int main()
{
    int coins[] = {1, 4, 6};

    int n = 3;
    int amount = 9;

    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= amount; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << coinChange(n, amount, coins);

    return 0;
}
output :  3 

    conclusion :  making coin problem was belongs to the dynamic programming and it states that we need fit the minimum number of coins to fullfill the amount 
time complexity : (O x A )
    space complexity : (O  x A ) 
