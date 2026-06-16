class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res=0;
        unordered_set<int> store(nums.begin(),nums.end());

        for(int num:nums){
            int cur=num,streak=0;
            while(store.find(cur)!=store.end()){
                streak++;
                cur++;
            }
            res=max(res,streak);
        }
        return res;
    }
};
