#include <iostream>
using namespace std;

int dp[100][100];

int knapsack(int n, int capacity, int weight[], int value[]) // this function calculates the maximum value
{
    
    if(n == 0 || capacity == 0) // this says that the base class which mean first condition 
        return 0;

    // Already calculated
    if(dp[n][capacity] != -1)
        return dp[n][capacity];

    // If item weight is greater than capacity
    if(weight[n-1] > capacity)
    {
        dp[n][capacity] = knapsack(n-1, capacity, weight, value);
    }
    else
    {
        // Take OR Don't take
        int take = value[n-1] +
                   knapsack(n-1, capacity-weight[n-1], weight, value);

        int notTake = knapsack(n-1, capacity, weight, value);

        dp[n][capacity] = max(take, notTake);
    }

    return dp[n][capacity];
}

int main()
{
    int weight[] = {2, 3, 4};
    int value[] = {3, 4, 5};

    int n = 3;
    int capacity = 5;

    // Fill dp table with -1
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= capacity; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << knapsack(n, capacity, weight, value);

    return 0;
}

output :  7 ;

Conclusion : the above knapsack problem will belongs to the dynamic programming , it check the capacity , weight and value (profit ) to be stored  it has the two 
 i) memoization 
ii) tabular 

 time complexity : (n x w)   n = number of items  , w = bag  capacity 
  space complexity : (n x w) 
