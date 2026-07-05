class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> targetMap;
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(targetMap.find(x)!=targetMap.end()){
                return {targetMap[x],i};
            }
            
            targetMap[nums[i]]=i;
        }
        return {-1,-1};
    }
};
