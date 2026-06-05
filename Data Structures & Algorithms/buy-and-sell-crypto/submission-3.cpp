class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int sell=prices[0];
        for(int i=0;i<prices.size();i++){
            int profit=prices[i]-sell;
            maxprofit=max(profit,maxprofit);
            sell=min(sell,prices[i]);
        }
        return maxprofit;
    }
};
