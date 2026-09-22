class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int miny=prices[0];
        int out=0;
        for(int i=1;i<prices.size();i++){
            miny=min(miny,prices[i]);
            out=max(out,prices[i]-miny);
        }
        return out;
    }
};
