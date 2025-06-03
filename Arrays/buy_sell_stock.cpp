class Solution{
public:
    int stockBuySell(vector<int> arr, int n){
        int mini = arr[0];
        int profit = 0;
        for(int i = 1; i < n; i++) {
            int cost = arr[i] - mini;
            profit = max(profit, cost);
            mini = min(mini, arr[i]);
        }
        return profit;
    }
};
// Examples:
// Input: arr = [10, 7, 5, 8, 11, 9]

// Output: 6

// Explanation: Buy on day 3 (price = 5) and sell on day 5 (price = 11), profit = 11 - 5 = 6.
