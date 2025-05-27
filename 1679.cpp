class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    }
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.size() - 1;
        int result = 0;
        while (left < right) {
            if (nums[left] + nums[right] == k) {
                result++;
                left++;
                right--;
            }
            else if (nums[left] + nums[right] > k) {
                while(nums[left] + nums[right] > k && left < right && nums[right] > k - nums[left]) {
                    right--;
                }
            }
            else {
                left++;
            }
        }
        return result;
    }
};