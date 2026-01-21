class Solution:
    def maxProfit(self, prices: List[int]) -> int:
            lowest_past = prices[0]
            max_profit = 0

            for price in prices:

                profit_assume = price - lowest_past
                if profit_assume > max_profit:
                    max_profit = profit_assume
                
                if price < lowest_past:
                    lowest_past = price

            return max_profit