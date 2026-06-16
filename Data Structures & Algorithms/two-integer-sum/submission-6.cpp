class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mapy;
        vector<int> sol;
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(mapy.find(x)!=mapy.end()){
                sol.push_back(mapy[x]);
                sol.push_back(i);
                return sol;
            }
            mapy[nums[i]]=i;
        }
       
    }
};
