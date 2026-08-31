class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int res=0;
        while(left<right){
            int temp_res=(right-left)*min(heights[left],heights[right]);
            if(heights[right]<=heights[left]){
                right--;
            }else{
                left++;
            }
            res=max(res,temp_res);
        }
        return res;
    }
};
