class Solution:
    def maxProfit(self, prices: List[int]) -> int:
            lowest_past = prices[0]
            max_profit = 0

            for price in prices:
        
                if (price - lowest_past) > max_profit:
                    max_profit = price - lowest_past
                
                if price < lowest_past:
                    lowest_past = price

            return max_profit