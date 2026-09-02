class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int buying=prices[0];
        int n=prices.size();
        for(int i=1;i<n;i++){
            if(buying<prices[i]){
                maxprofit=max(maxprofit,(prices[i]-buying));
            }
            buying=min(buying,prices[i]);


        }
        return maxprofit;
    }
};
