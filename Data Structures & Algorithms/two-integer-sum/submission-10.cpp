class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        unordered_map<int,int> count;
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(count.find(x)!=count.end()){
                output.push_back(count[x]);
                output.push_back(i);
                
            }
            count[nums[i]]=i;
        }
        return output;
    }
};
