class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==1){
            return 1;
        }
        if(nums.size()==2 && nums[0]==nums[1]){
            return 1;
        }
        int main_count=0;
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                count++;
            }
            else if(nums[i]==nums[i-1]){
                continue;
            }
            else{
                count=1;
            }
            main_count=max(count,main_count);
        }
        return main_count;
    }
};
