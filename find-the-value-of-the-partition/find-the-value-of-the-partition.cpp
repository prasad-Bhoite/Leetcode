class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {

            std::sort(nums.begin(), nums.end()); // Sort the array in ascending order

    int n = nums.size();
    int minDiff = std::numeric_limits<int>::max(); // Initialize minimum difference to a large value

    for (int i = 0; i < n - 1; i++) {
        int diff = nums[i + 1] - nums[i];
        minDiff = std::min(minDiff, diff);
    }

    return minDiff;
        
    }
};