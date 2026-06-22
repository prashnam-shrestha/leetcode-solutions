class Solution {
public:
    int maxProfit(vector<int>& prices) {

        pair<int, int> buy = {prices[0], 0};

        int profit = 0;

        int size = prices.size();

        for (int i = 0; i < size; i++) {
            if (buy.first > prices[i]) {
                buy.first = prices[i];
                buy.second = i;
            }

            if (buy.first < prices[i]) {
                int newProfit = prices[i] - buy.first;

                if (newProfit > profit) {
                    profit = newProfit;
                }
            }
        }

        return profit;
    }
};