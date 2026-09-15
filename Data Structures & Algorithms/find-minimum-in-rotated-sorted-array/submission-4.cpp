class Solution {
public:
    int findMin(vector<int> &nums) {
        int miny=INT_MAX;
        for(int i=0;i<nums.size();i++){
            miny=min(miny,nums[i]);
        }
        return miny;
    }
};
