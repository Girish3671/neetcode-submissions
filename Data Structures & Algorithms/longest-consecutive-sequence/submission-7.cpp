class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int largest_count=1;
        int temp_count=1;
        if(nums.size()==0){
            return 0;
        }
        if(nums.size()==1){
            return 1;
        }
    
        for(int i=1;i<nums.size();i++){
            
            if(nums[i]==nums[i-1]){
                continue;
            }
            if(nums[i]==nums[i-1]+1){
                temp_count++;
            }else{
                temp_count=1;
            }
            largest_count=max(temp_count,largest_count);
        }
        return largest_count;
    }
};
