class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> freqmap;
        for(auto it:nums){
            freqmap[it]++;
        }
        for(auto it:freqmap){
            if(it.second>=2){
                return true;
            }
        }
        return false;
    }
};