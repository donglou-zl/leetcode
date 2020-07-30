class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr_min_price = INT_MAX;
        int curr_max_profit = 0;
        for (int i = 0; i < prices.size(); ++i) {
            curr_min_price = std::min(curr_min_price, prices.at(i));
            if (prices.at(i) > curr_min_price) {
                curr_max_profit = std::max(curr_max_profit, prices.at(i) - curr_min_price);
            }
        }
        return curr_max_profit;
    }
};