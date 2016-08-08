class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0)
            return 0;
        int tempMaxProfit = 0;
        int minPrice = prices[0];
        
        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] <= minPrice) {
                minPrice = prices[i];
            }
            tempMaxProfit = (prices[i] - minPrice) > tempMaxProfit ? (prices[i] - minPrice) : tempMaxProfit;
        }
        return tempMaxProfit;
    }
};