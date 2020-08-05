class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int total_profit = 0;
        int curr_buy_price = INT_MAX;
        int curr_profit = 0;
        for (int i = 0; i < prices.size(); ++i) {
            if (i == 0) {
                curr_buy_price = prices.at(0);
            } else {
                if (prices.at(i) >= prices.at(i - 1)) {
                    curr_profit = prices.at(i) - curr_buy_price;
                } else {
                    total_profit += curr_profit;
                    curr_buy_price = prices.at(i);
                    curr_profit = 0;
                }
            }
            
        }
        total_profit += curr_profit;
        return total_profit;
    }
};

[7,1,5,3,6,4]
[1,2,3,4,5]