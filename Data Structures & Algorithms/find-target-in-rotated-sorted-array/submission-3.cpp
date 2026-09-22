class Solution {
public:
    int search(vector<int>& nums, int target) {
        
    int n = nums.size();

    int left = 0;
    int right = n - 1;

    while(left <= right) {

        int mid = left + (right - left) / 2;

        if(nums[mid] == target) {
            return mid;
        }

        // mid is in the LEFT sorted portion
        else if(nums[mid] > nums[n-1]) {

            // target is also in the left portion
            if(target > nums[n-1] && target < nums[mid]) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        // mid is in the RIGHT sorted portion
        else {

            // target is in the right portion
            if(target <= nums[n-1] && target > nums[mid]) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
    }

    return -1;
    }
};
