class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for(int it : nums){
            if(seen.find(it)!=seen.end()){
                return true;
            }
            seen.insert(it);
        }
        return false;
    }
};