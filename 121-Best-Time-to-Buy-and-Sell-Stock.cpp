class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int buy_price = prices[0];
        int profit = 0 ;

        for(int i = 1 ; i < prices.size() ; i++)
        {
            buy_price = min(buy_price,prices[i]);
            profit = max(profit , prices[i] - buy_price);
        }
        return profit;
    }
};