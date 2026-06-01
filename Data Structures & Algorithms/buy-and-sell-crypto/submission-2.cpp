class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int maxprofit=0;
        int sell=prices[0];
        for(int i=0;i<prices.size();i++){
            profit=prices[i]-sell;
            maxprofit=max(profit,maxprofit);
             sell=min(sell,prices[i]);
        }
        return maxprofit;
    }
};
